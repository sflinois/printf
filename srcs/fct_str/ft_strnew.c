/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 11:46:47 by sflinois          #+#    #+#             */
/*   Updated: 2016/12/21 11:46:50 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../../includes/libft.h"
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	tmp;

	if (!(str = (char*)malloc(size + sizeof(char))))
		return (NULL);
	tmp = 0;
	while (tmp <= size)
	{
		str[tmp] = '\0';
		tmp += 1;
	}
	return (str);
}
