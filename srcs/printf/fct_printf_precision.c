#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"
#include <stdlib.h>

char	*apply_precision(char *str, t_expr expr)
{
	char	*ret;
	int		i;

	if (ft_strlen(str) > expr.precision)
		return (str);
	ret = ft_strnew(expr.precision);
	i = expr.precision - ft_strlen(str);
	ft_strcat(ret + i, str);
	free(str);
	while (i-- > 0)
		ret[i] = '0';
	return (ret);
}
