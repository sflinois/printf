/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 12:41:55 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/10 15:27:13 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../includes/libft.h"
#include "../includes/ft_printf.h"

static void	convert_arg (t_expr expr, va_list *args)
{
	static const t_conv conv_tab[] = {
		{"diouxX", conv_int_arg},
		{"DOU", conv_dou_arg},
		{"cC", conv_c_arg},
		{"sS", conv_s_arg},
		{"p", conv_p_arg},
		{"%", conv_pct_arg},
		{NULL, NULL},
	};
	int		i;
	int		nb_c;

	i = 0;
	while(!ft_strchr(conv_tab[i].type, expr.type))
		i++;
	nb_c = conv_tab[i].conv(expr, args);
}

static int	process_conv(va_list *args, char **format)
{
	t_expr	expr;

	if (**format == '%')
	{
		(*format)++;
		while (**format && !ft_strchr("sSpdDioOuUxXcC%", (int)**format))
			(*format)++;
		expr.type = **format;
		convert_arg(expr, args);
		if (**format)
			(*format)++;
	}
	return (1);
}

static int	process_args(va_list *args, char *format)
{
	while (*format)
	{
		while (*format && *format != '%')
		{
			ft_putchar(*format);
			format++;
		}
		process_conv(args, &format);
	}
	return (1);
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


