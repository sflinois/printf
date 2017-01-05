/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 12:41:55 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/03 13:05:42 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../libft/includes/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	char		*test;
	int		ret;

	ft_putstr(format);
	va_start(args, format);
	test = va_arg(args, char*);
	ft_putstr(format);
	ret = 0;
	va_end(args);
	return (ret);
}

int	main(void)
{

	ft_printf("test%d");
	return (0);
}
