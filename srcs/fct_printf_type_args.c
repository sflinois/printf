/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_type_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:03:01 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/10 15:24:05 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "../includes/libft.h"
#include "../includes/ft_printf.h"

int			conv_int_arg(t_expr expr, va_list *args)
{
	char	*disp;
	int		i;
	int		ret;

	i = va_arg(*args, int);
	if (expr.type == 'd' || expr.type == 'i')
		disp = ft_itoa(i);
	if (expr.type == 'o')
		disp = ft_itoa_base(i, 8);
	if (expr.type == 'u')
		disp = ft_itoa_base(i, 10);
	if (expr.type == 'x')
		disp = ft_itoa_base(i, 16);
	if (expr.type == 'X')
		disp = ft_itoa_base(i, 16);
	ft_putstr(disp);
	free(disp);
	ft_putchar(expr.type);

	ret = 1;
	return (ret);
}

int			conv_dou_arg(t_expr expr, va_list *args)
{
	int		i;
	int		ret;
	
	i = va_arg(*args, int);
	ft_putchar(expr.type);

	ret = 1;
	return (ret);
}

int			conv_c_arg(t_expr expr, va_list *args)
{
	char	c;
	int		ret;

	c = va_arg(*args, int);
	ft_putchar(c);
	ft_putchar(expr.type);
	ret = 1;
	return (ret);
}

int			conv_s_arg(t_expr expr, va_list *args)
{
	char	*s;
	int		ret;

	s = va_arg(*args, char*);
	ft_putstr(s);
	ft_putchar(expr.type);
	ret = 1;
	return (ret);
}

int			conv_p_arg(t_expr expr, va_list *args)
{
	void	*p	;
	int		ret;

	p = va_arg(*args, void*);
	ft_putchar(expr.type);
	ret = 1;
	return (ret);
}

int		conv_pct_arg(t_expr expr, va_list *args)
{
	char	pct;
	int		i;
	int		ret;
	
	i = va_arg(*args, int);

	ft_putchar(expr.type);
	pct = '%';
	ft_putchar(pct);
	ret = 1;
	return (ret);
}
