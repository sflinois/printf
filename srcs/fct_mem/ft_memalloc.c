/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 11:38:19 by sflinois          #+#    #+#             */
/*   Updated: 2016/12/21 11:38:20 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	if (!(mem = (void*)malloc(size)))
		return (NULL);
	while (size-- > 0)
		mem[size] = '\0';
	return ((void*)mem);
}
