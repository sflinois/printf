/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 12:41:55 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/07 12:32:48 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../../includes/libft.h"

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
