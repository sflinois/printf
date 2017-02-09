/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_type_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:03:01 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/09 15:21:31 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <inttypes.h>
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
	char	*disp;
	int		ret;

	c = va_arg(*args, int);
	disp = ft_strnew(1);
	disp[0] = c;
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
	char	*disp;
	int		ret;

	s = va_arg(*args, char*);
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	disp = ft_strdup(s);
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
	if (expr.type == 'p')
		;
	disp = ft_itoa_base((int)p, 16, 0);
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
