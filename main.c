/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:10:17 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/11 13:55:53 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "includes/libft.h"

int		main(void)
{
	void	*p;

	p = malloc(sizeof(void*));
	ft_printf("Abc%dDef%dGhi", 10, 11);
	printf("\n");
	printf("Abc%dDef%dGhi", 10, 11);
	printf("\n");
	printf(" %-10d \n", 10);
	printf(" %d \n", 10);
	printf(" %-#10x \n", 10);
	printf(" %#x \n", 10);
	return 0;
}
