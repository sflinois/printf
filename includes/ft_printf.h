/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 13:21:44 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/09 12:19:24 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>

/*
** # define BI_JUSTIFY = 1
** # define BI_ZERO = 2
** # define BI_PLUS = 4
** # define BI_BLANK = 8
** # define BI_SHARP = 16
*/

typedef struct	s_expr
{	
	char		type;	
}				t_expr;

typedef struct	s_conv
{
	char		*type;
	int			(*conv)(t_expr expr, va_list *args);
}				t_conv;

int					ft_printf(const char *format, ...);
int					conv_int_arg(t_expr, va_list *args);
int					conv_dou_arg(t_expr, va_list *args);
int					conv_c_arg(t_expr, va_list *args);
int					conv_s_arg(t_expr, va_list *args);
int					conv_p_arg(t_expr, va_list *args);
int					conv_pct_arg(t_expr, va_list *args);

#endif
