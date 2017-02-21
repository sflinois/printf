/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 14:49:26 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/21 17:09:00 by sflinois         ###   ########.fr       */
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

	//ret = ft_imttoa_base((intmax_t) wc, 10, 0);
	//ft_putstr(ret);
	//ft_putstr("\n");
	if (wc < 128 && wc >= 0)
	{
		if (!(ret = (char*)malloc(sizeof(char) * 2)))
			return (NULL);
		*(ret + 1) = 0;
		*(ret) = wc;
		return (ret);
	}
	else if (wc < 2048 && wc >= 128)
	{
		if (!(ret = (char*)malloc(sizeof(char) * 3)))
			return (NULL);
		*(ret + 2) = 0;
		*(ret + 1) = 128 + (63 & wc);
		wc = wc >> 6;
		*(ret) = 128 + 64 + (31 & wc);
		return (ret);
	}
	else if (wc < 65536 && wc >= 2048)
	{
		if (!(ret = (char*)malloc(sizeof(char) * 4)))
			return (NULL);
		*(ret + 3) = 0;
		*(ret + 2) = 128 + (63 & wc);
		wc = wc >> 6;
		*(ret + 1) = 128 + (63 & wc);
		wc = wc >> 6;
		*(ret) = 128 + 64 + 32 + (15 & wc);
		return (ret);
	}
	else if (wc < 2097152 && wc >= 65536)
	{
		if (!(ret = (char*)malloc(sizeof(char) * 5)))
			return (NULL);
		*(ret + 4) = 0;
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
