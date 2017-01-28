/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:24:30 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/28 15:07:31 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <inttypes.h>

typedef struct		s_expr
{
	unsigned char	flags;
	unsigned int	min_width;
	unsigned int	precision;
	unsigned char	length;
	char			type;	
}					t_expr;

typedef struct		s_conv
{
	char			*type;
	int				(*conv)(t_expr expr, va_list *args);
}					t_conv;

typedef struct		s_len_modifier
{
	char			type;
	char			c;
	short int		si;
	int				i;
	long int		li;
	long long int	lli;
	intmax_t		im;
	size_t			st;
}					t_len_modifier;

char				*apply_min_width(char *str, t_expr expr);
char				*apply_precision(char *str, t_expr expr);
char				*apply_flags(char *str, t_expr expr);
void				apply_length(intmax_t *imt, t_expr expr, va_list *args);

void				new_expr(t_expr *expr);
int					convert_arg (t_expr expr, va_list *args);
int					expr_pars(char **format, t_expr *expr);
int					process_conv(va_list *args, char **format);
int					process_args(va_list *args, char *format);
int					conv_int_arg(t_expr, va_list *args);
int					conv_dou_arg(t_expr, va_list *args);
int					conv_c_arg(t_expr, va_list *args);
int					conv_s_arg(t_expr, va_list *args);
int					conv_p_arg(t_expr, va_list *args);
int					conv_pct_arg(t_expr, va_list *args);

#endif
