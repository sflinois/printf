/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_printf_c_args.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 14:26:18 by sflinois          #+#    #+#             */
/*   Updated: 2017/03/19 14:28:07 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <wchar.h>
#include "../includes/libft.h"
#include "../includes/ft_printf.h"

int				conv_c_arg(t_expr expr, va_list *args)
{
	int			c;
	wint_t		wc;
	char		*disp;
	int			ret;

	c = 0;
	wc = 0;
	if (expr.type == 'c' && expr.length != L_L)
	{
		c = va_arg(*args, int);
		disp = ft_strnew(1);
		disp[0] = c;
	}
	else
	{
		wc = va_arg(*args, wint_t);
		disp = ft_retwchar((wchar_t)wc);
	}
	disp = apply_min_width(disp, expr);
	disp = apply_flags(disp, expr);
	if (!disp)
		return (-1);
	if (c == 0 && wc == 0 && expr.min_width >= 1)
		disp[ft_strlen(disp) - 1] = 0;
	if (c == 0 && wc == 0 && expr.flags & F_MINUS)
		ft_putchar(0);
	ft_putstr(disp);
	if (c == 0 && wc == 0 && !(expr.flags & F_MINUS))
		ft_putchar(0);
	ret = ft_strlen(disp);
	free(disp);
	return (c == 0 && wc == 0 ? 1 + ret : ret);
}
