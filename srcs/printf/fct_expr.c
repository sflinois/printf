#include "../../includes/ft_printf.h"

void		new_expr(t_expr *expr)
{
	expr->flags = 0;
	expr->min_width = 0;
	expr->precision = 0;
	expr->length = 0;
	expr->type = 0;
}
