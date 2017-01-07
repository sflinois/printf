/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 10:44:36 by sflinois          #+#    #+#             */
/*   Updated: 2016/12/21 11:46:37 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../../includes/libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char		*s2;
	size_t		len;

	len = ft_strlen(s1);
	if (n < len)
		len = n;
	if (!(s2 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_bzero((void*)s2, len + 1);
	while (len-- > 0)
		s2[len] = s1[len];
	return (s2);
}
