/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_to_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 14:57:40 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/10 15:02:50 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	ft_digit_to_char(int d, int base, int maj)
{
	if (base > 2 && base <= 16)
	{
		if (d >= 0 && d <= base)
		{
			if (d < base)
				return (d + '0');
			if (d >= base)
			{
				if (maj)
					return (d + 'A');
				else
					return (d + 'a');
			}
		}
	}
	return ('X');
}
