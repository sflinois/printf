/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 12:41:55 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/24 12:39:33 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../includes/libft.h"
#include "../includes/ft_printf.h"

int	convert_arg (t_expr expr, va_list *args)
{
	static const t_conv conv_tab[] = {
		{"bdiouxX", conv_int_arg},
		{"DOU", conv_dou_arg},
		{"cC", conv_c_arg},
		{"sS", conv_s_arg},
		{"p", conv_p_arg},
		{"%", conv_pct_arg},
		{NULL, NULL},
	};
	int		i;
	int		ret;

	i = 0;
	ret = -1;
	while(!ft_strchr(conv_tab[i].type, expr.type))
		i++;
	if (conv_tab[i].type)
		ret = conv_tab[i].conv(expr, args);
	return (ret);
}


int	expr_pars(char **format, t_expr *expr)
{
	char	*c;
	
	//flags
	expr->flags = 0;
	while (**format && (c = ft_strchr("#0-+ ", (int)**format)))
	{
		if (*c == '#')
			expr->flags |= 1;
		if (*c == '0')
			expr->flags |= 2;
		if (*c == '-')
			expr->flags |= 4;
		if (*c == '+')
			expr->flags |= 8;
		if (*c == ' ')
			expr->flags |= 16;
		(*format)++;
	}

	//min_width
	expr->min_width = 0;
	while (**format && ft_isdigit((int)**format))
	{
		if (expr->min_width != 0)
			expr->min_width *= 10;
		expr->min_width += (int)**format - '0';
		(*format)++;
	}

	//precision
	expr->precision = 0;
	if (**format && **format == '.')
	{
		(*format)++;
		while (**format && ft_isdigit((int)**format))
		{
			if (expr->precision != 0)
				expr->precision *= 10;
			expr->precision += (int)**format - '0';
			(*format)++;
		}
	}

	//length
	expr->length = 0;
	if (**format && (c = ft_strchr("hljz", (int)**format)))
	{
		if (*c == 'h')
		{
			if (*(c + 1) == 'h')
			{
				expr->length |= 1;
				(*format)++;
			}
			else
				expr->length |= 2;
		}
		if (*c == 'l')
		{
			if (*(c + 1) == 'l')
			{
				expr->length |= 4;
				(*format)++;
			}
			else
				expr->length |= 8;
		}	
		if (*c == 'j')
			expr->length |= 16;
		if (*c == 'z')
			expr->length |= 32;
		(*format)++;
	}


	return (1);
}

int	process_conv(va_list *args, char **format)
{
	t_expr	expr;
	int		ret;

	ret = 0;
	new_expr(&expr);
	if (**format == '%')
	{
		(*format)++;
		if (expr_pars(format, &expr) == -1)
			return (-1);
		while (**format && !ft_strchr("sSpdDioOuUxXcC%", (int)**format))
			(*format)++;
		expr.type = **format;
		ret = convert_arg(expr, args);
		if (**format)
			(*format)++;
	}
/*	ft_putchar('\n');
	ft_putstr("flags : ");
	ft_putnbr(expr.flags);
	ft_putchar('\n');
	ft_putstr("min_width : ");
	ft_putnbr(expr.min_width);
	ft_putchar('\n');
	ft_putstr("precision : ");
	ft_putnbr(expr.precision);
	ft_putchar('\n');
	ft_putstr("length : ");
	ft_putnbr(expr.length);
	ft_putchar('\n');
*/
	return (ret);
}

int	process_args(va_list *args, char *format)
{
	int	ret;

	ret = 0;
	while (*format)
	{
		while (*format && *format != '%')
		{
			ft_putchar(*format);
			format++;
			ret++;
		}
		ret += process_conv(args, &format);
	}
	return (ret);
}

int			ft_printf(const char *format, ...)
{
	va_list		args;
	int			ret;

	va_start(args, format);
	ret = process_args(&args, (char*)format);
	va_end(args);
	return (ret);
}


