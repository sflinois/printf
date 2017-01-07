/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:43:21 by sflinois          #+#    #+#             */
/*   Updated: 2016/12/21 11:42:34 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i++])
		if (s[i - 1] == (char)c)
			return ((char *)(s + i - 1));
	if (s[i - 1] == (char)c)
		return ((char *)(s + i - 1));
	return (NULL);
}
