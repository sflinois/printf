/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_type_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:03:01 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/11 14:00:27 by sflinois         ###   ########.fr       */
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
		disp = ft_itoa_base((unsigned int)i, 8, 0);
	if (expr.type == 'u')
		disp = ft_itoa_base((unsigned int)i, 10, 0);
	if (expr.type == 'x')
		disp = ft_itoa_base((unsigned int)i, 16, 0);
	if (expr.type == 'X')
		disp = ft_itoa_base((unsigned int)i, 16, 1);
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
		disp = ft_litoa(i);
	if (expr.type == 'O')
		disp = ft_litoa_base((unsigned long int)i, 8, 0);
	if (expr.type == 'U')
		disp = ft_litoa_base((unsigned long int)i, 10, 0);
	ft_putstr(disp);
	ret = ft_strlen(disp);
	free(disp);
	return (ret);
}

int			conv_c_arg(t_expr expr, va_list *args)
{
	int		c;
	int		ret;

	c = va_arg(*args, int);
	if (expr.type == 'c')
		ft_putchar((unsigned char)c);
	if (expr.type == 'C')
		ft_putchar((unsigned char)c);
	ret = 1;
	return (ret);
}

int			conv_s_arg(t_expr expr, va_list *args)
{
	char	*s;
	int		ret;

	s = va_arg(*args, char*);
	if (expr.type == 's')
		ft_putstr(s);
	if (expr.type == 'S')
		ft_putstr(s);
	ret = ft_strlen(s);
	return (ret);
}

int			conv_p_arg(t_expr expr, va_list *args)
{
	char	*disp;
	void	*p	;
	int		ret;

	p = va_arg(*args, void*);
	if (expr.type == 'p')
		;
	disp = ft_itoa_base((int)p, 16, 0);
	ret = ft_strlen(disp);
	free(disp);
	return (ret);
}

int		conv_pct_arg(t_expr expr, va_list *args)
{
	int		i;
	int		ret;
	
	i = va_arg(*args, int);
	ft_putchar(expr.type);
	ret = 1;
	return (ret);
}
