/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 11:45:23 by sflinois          #+#    #+#             */
/*   Updated: 2016/12/21 11:45:26 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	char	*str;

	str = (char *)s;
	while (*str)
		str++;
	return (str - s);
}
