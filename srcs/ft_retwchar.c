/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 14:49:26 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/23 17:43:53 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include "../includes/libft.h"
#include <inttypes.h>

char	*ft_retwchar(wchar_t wc)
{
	char	*ret;
	int		size;

	size = 1;
	if (wc >= 0 && wc < 128)
		size = 2;
	else if (wc >= 128 && wc < 2048)
		size = 3;
	else if (wc >= 2048 && wc < 65536)
		size = 4;
	else if (wc >= 65536 && wc < 2097152)
		size = 5;
	if (!(ret = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	*(ret + size - 1) = 0;
	if (wc >= 0 && wc < 128)
	{
		*(ret) = wc;
		return (ret);
	}
	else if (wc >= 128 && wc < 2048)
	{
		*(ret + 1) = 128 + (63 & wc);
		wc = wc >> 6;
		*(ret) = 128 + 64 + (31 & wc);
		return (ret);
	}
	else if (wc >= 2048 && wc < 65536)
	{
		*(ret + 2) = 128 + (63 & wc);
		wc = wc >> 6;
		*(ret + 1) = 128 + (63 & wc);
		wc = wc >> 6;
		*(ret) = 128 + 64 + 32 + (15 & wc);
		return (ret);
	}
	else if (wc >= 65536 && wc < 2097152)
	{
		*(ret + 3) = 256 + (127 & wc);
		wc = wc >> 6;
		*(ret + 2) = 256 + (127 & wc);
		wc = wc >> 6;
		*(ret + 1) = 256 + (127 & wc);
		wc = wc >> 6;
		*(ret) = 128 + 64 + 32 + 16 + (7 & wc);
		return (ret);
	}
	return (NULL);
}