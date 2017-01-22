#include <stdlib.h>
#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"

char	*apply_min_width(char *str, t_expr expr)
{
	int	n;
	char	*ret;

	n = expr.min_width - ft_strlen(str);
	if (n > 0)
		return (str);
	else
	{
		if ((ret = ft_strnew(sizeof(char) * expr.min_width)))
		{
			while (n > 0)
			{
				n--;
				ret[n] = ' ';
			}
			ret = ft_strcat(ret, str);
			free(str);
		}
	}
	return (ret);
}
