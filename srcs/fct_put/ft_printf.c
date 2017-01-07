/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 12:41:55 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/07 14:02:42 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"

static int	process_conv(va_list *args, char **format)
{
	if (**format == '%')
	{
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


