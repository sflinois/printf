/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_printf_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 16:38:09 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/27 16:30:54 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"
#include <stdlib.h>

char	*applyflag_sharp(char *str, t_expr expr)
{
	char	*ret;
	int		hexa;
	int		i;
	
	if (ft_strchr("oxX", (int)expr.type))
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '0')
			i++;
		if (!str[i])
			return (str);
		hexa = 0;
		if (ft_strchr("xX", (int)expr.type))
			hexa = 1;
		if (i >= (1 + hexa))
		{
			ret = str;
			i--;
			if (*str == '0')
				i = 0 + hexa;
			ret[i] = 'x';
			if (expr.type == 'X')
				ret[i] = 'X';
			ret[i - hexa] = '0';
			return (ret);
		}
		ret = ft_strnew(ft_strlen(str) + 1 + hexa);
		*(ret + hexa) = 'x';
		if (expr.type == 'X')
			*(ret + hexa) = 'X';
		*ret = '0';
		ret = ft_strcat(ret, str + i);
		free(str);
		return (ret);
	}
	return (str);
}

char	*applyflag_zero(char *str, t_expr expr)
{
	int		i;

	if (expr.flags & 4)
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			str[i] = '0';
		i++;
	}
	return (str);
}

char	*applyflag_minus(char *str)
{
	int		i;
	char	*tmp_str;
	char	*tmp_space;

	
	i = 0;
	while (str[i] == ' ')
		i++;
	tmp_str = ft_strdup(str + i);
	tmp_space = ft_strndup(str, i);
	free(str);
	str = ft_strjoin(tmp_str, tmp_space);
	return (str);
}

char	*apply_flags(char *str, t_expr expr)
{

	if (expr.flags & 2)
		str = applyflag_zero(str, expr);
	if (expr.flags & 1)
		str = applyflag_sharp(str, expr);
	if (expr.flags & 4)
		str = applyflag_minus(str);
	return (str);
}
