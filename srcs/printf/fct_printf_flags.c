/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_printf_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 16:38:09 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/24 17:22:06 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"
#include <stdlib.h>

char	*applyflag_sharp(char *str, t_expr expr)
{
	/*
	/!\ RANDOM CRASH /!\
	/!\ RANDOM CRASH /!\
	/!\ RANDOM CRASH /!\
	*/

	char	*ret;

	if (ft_strchr("o", (int)expr.type))
	{
		if (*str == '0')
			return (str);
		ret = ft_strnew(ft_strlen(str) + 1);
		*ret = '0';
		ret = ft_strcat(ret, str);
		free(str);
		return (ret);
	}
	else if (ft_strchr("xX", (int)expr.type))
	{
		if (*str == '0')
			return (str);
		ret = ft_strnew(ft_strlen(str) + 2);
		*ret = '0';
		*(ret + 1) = 'x';
		ret = ft_strcat(ret, str);
		free(str);
		return (ret);
	}

	/*
	/!\ RANDOM CRASH /!\
	/!\ RANDOM CRASH /!\
	/!\ RANDOM CRASH /!\
	*/
	return (str);
}

char	*apply_flags(char *str, t_expr expr)
{
	if (expr.flags | 1)
		str = applyflag_sharp(str, expr);
	return (str);
}
