/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 17:05:44 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/10 14:58:30 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_itoa_base(int n, unsigned int base)
{
	unsigned int	nui;
	unsigned int	i;
	char			*str;

	i = (n < 0) ? 2 : 1;
	nui = (n < 0) ? -n : n;
	while (nui > (base - 1))
	{
		nui /= base;
		i++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	nui = (n < 0) ? -n : n;
	if (n < 0)
		str[0] = '-';
	while (nui > (base - 1))
	{
		str[i--] = ft_digit_to_char(nui % base, base, 1);
		nui /= base;
	}
	str[i] = nui + '0';
	return (str);
}
