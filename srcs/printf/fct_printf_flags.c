#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"
#include <stdlib.h>

char	*apply_flags(char *str, t_expr expr)
{
	char	*ret;

	if (expr.type == 'o')
	{
		if (*str == '0')
			return (str);
		ret = ft_strnew(ft_strlen(str) + 1);
		*ret = '0';
		ret = ft_strcat(ret, str);
		free(str);
		return (ret);
	}

	if (ft_strchr("xX", (int)expr.type))
	{
		if (*str == '0')
			return (str);
		ret = ft_strnew(ft_strlen(str) + 2);
		*ret = '0';
		*(ret + 1) = 'x';
		ret = ft_strcat(ret, str);
		free(str);
		return (ret);
	}

	if (ft_strchr("aAeEfFgG", (int)expr.type))
	{
		if (*str == '0')
			return (str);
		ret = ft_strnew(ft_strlen(str) + 1);
		*ret = '0';
		ret = ft_strcat(ret, str);
		free(str);
		return (ret);
	}
	return (str);
}


