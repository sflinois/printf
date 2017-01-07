/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:56:48 by sflinois          #+#    #+#             */
/*   Updated: 2016/12/21 11:47:34 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	if (!(*little))
		return ((char*)big);
	while (big[i])
	{
		while (big[i + j] == little[j])
		{
			if (!(little[j]))
				return ((char *)(big + i));
			j++;
		}
		if (!(little[j]))
			return ((char *)(big + i));
		j = 0;
		i++;
	}
	return (NULL);
}
