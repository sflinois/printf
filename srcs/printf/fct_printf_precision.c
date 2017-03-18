/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_printf_precision.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 17:47:25 by sflinois          #+#    #+#             */
/*   Updated: 2017/03/18 14:09:19 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"
#include <stdlib.h>

char	*apply_precision(char *str, t_expr expr)
{
	char	*ret;
	int		neg;
	int		i;

	if (!str || expr.precision == -1)
		return (str);
	if (ft_strchr("diouxX", (int)expr.type))
	{
		if (*str == '0' && expr.precision == 0)
		{
			if (expr.type == 'o' && (expr.flags & F_SHARP))
				return (str);
			free(str);
			return (ft_strdup(""));
		}
		neg = 0;
		if (*str == '-')
			neg = 1;
		if (ft_strlen(str) - neg > (size_t)expr.precision)
			return (str);
		if (!(ret = ft_strnew(expr.precision + neg)))
			return (NULL);
		i = expr.precision - ft_strlen(str) + neg;
		ft_strcat(ret + i, str);
		free(str);
		while (i-- > 0)
			ret[i + neg] = '0';
		ret[0] = neg ? '-' : '0';
		return (ret);
	}
	if (ft_strchr("s", (int)expr.type))
	{
		if (ft_strlen(str) < (size_t)expr.precision)
			return (str);
		if (!(ret = ft_strndup(str, expr.precision)))
			return (NULL);
		free(str);
		return (ret);
	}
	if (ft_strchr("p", (int)expr.type))
	{
		
	
	}
	return (str);
}
