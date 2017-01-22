#include <stdlib.h>
#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"

char	*apply_min_width(char *str, unsigned int min_width)
{
	int	n;
	char	*ret;

	n = min_width - ft_strlen(str);
	if (n > 0)
		return (str);
	else
	{
		if ((ret = ft_strnew(sizeof(char) * min_width)))
		{
			while (n > 0)
			{
				n--;
				ret[n] = ' ';
			}
			ft_putchar('>');
			ft_putstr(ret);
			ft_putchar('<');
			ret = ft_strcat(ret, str);
			free(str);
		}
	}
	return (ret);
}
