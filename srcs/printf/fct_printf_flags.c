/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_printf_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 16:38:09 by sflinois          #+#    #+#             */
/*   Updated: 2017/03/13 09:03:00 by sflinois         ###   ########.fr       */
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

	if (!ft_strchr("oOxXp", (int)expr.type))
		return (str);
	i = 0;
	while (str[i] == ' ' || str[i] == '0')
		i++;
	if (!str[i])
		return (str);
	hexa = 0;
	if (ft_strchr("xXp", (int)expr.type))
		hexa = 1;
	if (i >= (1 + hexa))
	{
		i--;
		if (*str == '0')
			i = 0 + hexa;
		str[i] = 'x';
		if (expr.type == 'X')
			str[i] = 'X';
		str[i - hexa] = '0';
		return (str);
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

char	*applyflag_zero(char *str, t_expr expr)
{
	int		i;

	if (expr.flags & 4 || !ft_strchr("diouxXsc%", (int)expr.type))
		return (str);
	i = 0;
	while (str[i] && expr.precision == -1)
	{
		if (str[i] == ' ')
			str[i] = '0';
		if (str[i] == '-' && i > 0 && !ft_strchr("sc%", (int)expr.type))
		{
			str[0] = '-';
			str[i] = '0';
		}
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
	free(tmp_str);
	free(tmp_space);
	return (str);
}

char	*applyflag_spaceplus(char *str, t_expr expr)
{
	char	*ret;
	int		nb;
	int		i;
	char	c;

	if (!ft_strchr("di", (int)expr.type))
		return (str);
	i = 0;
	c = expr.flags & 8 ? '+' : ' ';
	if (str[0] == '0' && !str[1])
	{
		free(str);
		ret = ft_strdup("+0");
		*ret = c;
		return (ret);
	}
	while (str[i] == '0')
		i++;
	while (str[i] == ' ')
		i++;
	nb = i;
	if (str[i] == '-')
		return (str);
	while (ft_isdigit(str[i]))
		i++;
	while (i - nb < expr.precision && nb > 0)
		nb--;
	ret = str;
	if (nb == 0)
	{
		if (str[i])
		{
			ft_memmove(str + 1, str, i);
			str[0] = c;
		}
		else
		{
			ret = ft_strjoin(" ", str);
			free(str);
			*ret = c;
		}
		return (ret);
	}
	if (str[nb - 1] == '0')
		str[0] = c;
	else
		str[nb - 1] = c;
	return (ret);
}

char	*apply_flags(char *str, t_expr expr)
{
	if (expr.flags & 2)
		str = applyflag_zero(str, expr);
	if (expr.flags & 1)
		str = applyflag_sharp(str, expr);
	if (expr.flags & 4)
		str = applyflag_minus(str);
	if (expr.flags & 8 || expr.flags & 16)
		str = applyflag_spaceplus(str, expr);
	return (str);
}
