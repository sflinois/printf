/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:24:30 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/11 11:29:22 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>

/*
 * ** # define F_JUSTIFY = 1
 * ** # define F_ZERO = 2
 * ** # define F_PLUS = 4
 * ** # define F_BLANK = 8
 * ** # define F_SHARP = 16
 * */

typedef struct	s_expr
{
	unsigned char	flags;
	char			type;	
}				t_expr;

typedef struct	s_conv
{
	char		*type;
	int			(*conv)(t_expr expr, va_list *args);
}				t_conv;

int					conv_int_arg(t_expr, va_list *args);
int					conv_dou_arg(t_expr, va_list *args);
int					conv_c_arg(t_expr, va_list *args);
int					conv_s_arg(t_expr, va_list *args);
int					conv_p_arg(t_expr, va_list *args);
int					conv_pct_arg(t_expr, va_list *args);

#endif
