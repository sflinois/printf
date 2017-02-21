/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_type_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:03:01 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/21 17:08:48 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <inttypes.h>
#include <wchar.h>
#include "../includes/libft.h"
#include "../includes/ft_printf.h"

int			conv_int_arg(t_expr expr, va_list *args)
{
	char		*disp;
	intmax_t	imt;
	int		ret;

	//nb.type = init_len_modifier(&nb, args);
	apply_length(&imt, expr, args);
	if (expr.type == 'd' || expr.type == 'i')
		disp = ft_imttoa(imt);
	if (expr.type == 'b')
		disp = ft_imttoa_base(imt, 2, 0);
	if (expr.type == 'o')
		disp = ft_imttoa_base(imt, 8, 0);
	if (expr.type == 'u')
		disp = ft_imttoa_base(imt, 10, 0);
	if (expr.type == 'x')
		disp = ft_imttoa_base(imt, 16, 0);
	if (expr.type == 'X')
		disp = ft_imttoa_base(imt, 16, 1);
	disp = apply_precision(disp, expr);
	disp = apply_min_width(disp, expr);
	disp = apply_flags(disp, expr);
	ft_putstr(disp);
	ret = ft_strlen(disp);
	free(disp);
	return (ret);
}

int			conv_dou_arg(t_expr expr, va_list *args)
{
	char		*disp;
	long int	i;
	int			ret;
	
	i = va_arg(*args, long int);
	if (expr.type == 'D')
		disp = ft_imttoa(i);
	if (expr.type == 'O')
		disp = ft_imttoa_base(i, 8, 0);
	if (expr.type == 'U')
		disp = ft_imttoa_base(i, 10, 0);
	disp = apply_precision(disp, expr);
	disp = apply_min_width(disp, expr);
	disp = apply_flags(disp, expr);
	ft_putstr(disp);
	ret = ft_strlen(disp);
	free(disp);
	return (ret);
}

int			conv_c_arg(t_expr expr, va_list *args)
{
	int		c;
	wint_t	wc;
	char	*disp;
	int		ret;

	c = 0;
	if (expr.type == 'c' && expr.length != 4)
	{
		c = va_arg(*args, int);
		disp = ft_strnew(1);
		disp[0] = c;
	}
	else
	{
		wc = va_arg(*args, wint_t);
		if ((disp = ft_retwchar((wchar_t)wc)) == NULL)
			return (-1);
	}
	disp = apply_min_width(disp, expr);
	disp = apply_flags(disp, expr);
	ret = ft_strlen(disp);
	if (c == 0 && expr.min_width > 1)
		disp[ft_strlen(disp) - 1] = 0;
	ft_putstr(disp);
	free(disp);
	return (ret == 0 ? 1 : ret);
}

int			conv_s_arg(t_expr expr, va_list *args)
{
	char	*s;
	wchar_t *ws;
	char	*disp;
	int		ret;

	if (expr.type == 's' && expr.length != 4)
	{
		s = va_arg(*args, char*);
		if (s == NULL)
			disp = ft_strdup("(null)");
		else
			disp = ft_strdup(s);
	}
	else
	{
		ws = va_arg(*args, wchar_t*);
		if (ws == NULL)
			disp = ft_strdup("(null)");
		else
			disp = ft_retwstr(ws);
	}
	disp = apply_precision(disp, expr);
	disp = apply_min_width(disp, expr);
	disp = apply_flags(disp, expr);
	ft_putstr(disp);
	ret = ft_strlen(disp);
	return (ret == 0 && !s ? 1 : ret);
}

int			conv_p_arg(t_expr expr, va_list *args)
{
	char	*disp;
	void	*p;
	int		ret;

	p = va_arg(*args, void*);
	disp = ft_imttoa_base((uintmax_t)p, 16, 0);
	if (p == 0)
	{
		free(disp);
		disp = ft_strdup("0x0");
	}
	else
		expr.flags |= 1;
	disp = apply_min_width(disp, expr);
	disp = apply_flags(disp, expr);
	ft_putstr(disp);
	ret = ft_strlen(disp);
	free(disp);
	return (ret);
}

int		conv_pct_arg(t_expr expr, va_list *args)
{
	char	*disp;
	int		ret;
	va_list	warning;

	va_copy(warning, *args);
	disp = ft_strdup("%");
	disp = apply_min_width(disp, expr);
	disp = apply_flags(disp, expr);
	ft_putstr(disp);
	ret = ft_strlen(disp);
	free(disp);
	return (ret);
}
