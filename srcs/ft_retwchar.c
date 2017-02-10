/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 14:49:26 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/10 15:44:01 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include "../includes/libft.h"

char	*ft_retwchar(wint_t wi)
{
	char	*ret;

	if (wi < 128 && wi >= 0)
	{
		if (!(ret = (char*)malloc(sizeof(char) * 2)))
			return (NULL);
		*(ret + 1) = 0;
		*(ret) = wi;
		return (ret);
	}
	else if (wi < 2048 && wi >= 128)
	{
		if (!(ret = (char*)malloc(sizeof(char) * 3)))
			return (NULL);
		*(ret + 2) = 0;
		*(ret + 1) = 128 + (63 & wi);
		wi = wi >> 6;
		*(ret) = 128 + 64 + (31 & wi);
		return (ret);
	}
	else if (wi < 65536 && wi >= 2048)
	{
		if (!(ret = (char*)malloc(sizeof(char) * 4)))
			return (NULL);
		*(ret + 3) = 0;
		*(ret + 2) = 128 + (63 & wi);
		wi = wi >> 6;
		*(ret + 1) = 128 + (63 & wi);
		wi = wi >> 6;
		*(ret) = 128 + 64 + 32 + (15 & wi);
		return (ret);
	}
	else if (wi < 2097152 && wi >= 65536)
	{
		if (!(ret = (char*)malloc(sizeof(char) * 5)))
			return (NULL);
		*(ret + 4) = 0;
		*(ret + 3) = 256 + (127 & wi);
		wi = wi >> 6;
		*(ret + 2) = 256 + (127 & wi);
		wi = wi >> 6;
		*(ret + 1) = 256 + (127 & wi);
		wi = wi >> 6;
		*(ret) = 128 + 64 + 32 + 16 + (7 & wi);
		return (ret);
	}
	return (NULL);
}
