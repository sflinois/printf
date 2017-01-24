/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_printf_length.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 14:22:14 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/24 15:54:49 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <inttypes.h>
#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"

void	apply_length(intmax_t *imt, t_expr expr, va_list *args)
{
	*imt = va_arg(*args, intmax_t);
	if (expr.length == 0)
	{
		*imt = (int)*imt;
	}
	else if (expr.length == 1)
		*imt = (char)*imt;
	else if (expr.length == 2)
		*imt = (short int)*imt;
	else if (expr.length == 4)
		*imt = (long int)*imt;
	else if (expr.length == 8)
		*imt = (long long int)*imt;
	else if (expr.length == 16)
		*imt = (size_t)*imt;
}
