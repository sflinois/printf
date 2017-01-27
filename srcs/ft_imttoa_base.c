/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imttoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 15:07:36 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/27 14:18:31 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

/*
char	*ft_imttoa_base(uintmax_t n, unsigned int base, int maj)
{
	uintmax_t	nui;
	unsigned int		i;
	char				*str;

	i = 1;
	nui = n;
	while (nui > (base - 1))
	{
		nui /= base;
		i++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	nui = n;
	while (nui > (base - 1))
	{
		str[i--] = ft_digit_to_char(nui % base, base, maj);
		nui /= base;
	}
	str[i] = ft_digit_to_char(nui, base, maj);
	return (str);
}
*/
char	*ft_imttoa_base(uintmax_t n, unsigned int base, int maj)
{
	uintmax_t		nui;
	unsigned int	i;
	char			str[50];

	if (n == 0)
		return (ft_strdup("0"));
	nui = n;
	i = 0;
	while (nui > (base - 1))
	{
		str[i] = ft_digit_to_char(nui % base, base, maj);
		nui /= base;
		i++;
	}
	str[i] = ft_digit_to_char(nui, base, maj);
	str[i + 1] = '\0';
	ft_strrev(str);
	return (ft_strdup(str));
}
