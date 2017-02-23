/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_expr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 17:45:51 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/23 17:45:52 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../includes/ft_printf.h"

void		new_expr(t_expr *expr)
{
	expr->flags = 0;
	expr->min_width = 0;
	expr->precision = 0;
	expr->length = 0;
	expr->type = 0;
}
