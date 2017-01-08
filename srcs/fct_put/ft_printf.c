/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 12:41:55 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/08 16:59:52 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"


static int	is_arg_type(char c)
{
	return ((c == 's' || c == 'S' || c == 'p' || c == 'd' || c == 'D' || 
			c == 'i' || c == 'o' || c == 'O' || c == 'u' ||c == 'U' || c == 'x'
			|| c == 'X' || c == 'c' || c == 'C' || c == '%') ? 1 : 0);
}

static void	convert_arg (char type, va_list *args)
{
	int		i;

	if (type == '%')
		ft_putchar('%');
	if (type == 'd' || type == 'i')
	{
		i = va_arg(*args, int);
		ft_putnbr(i);
	}
}

static int	process_conv(va_list *args, char **format)
{
	if (**format == '%')
	{
		(*format)++;
		while (**format && !is_arg_type(**format))
		{
			//if (is_flag(**format))
				


			(*format)++;
		}
		convert_arg(**format, args);
		if (**format)
			(*format)++;
		va_arg(*args, char*);
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


