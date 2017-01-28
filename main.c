/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:10:17 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/28 16:57:16 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "includes/libft.h"

int		main(void)
{
	int		i = 4242;
	printf("\"%-+10.5d\"\n", i);
	printf("\"%- 10.5d\"\n", i);
	printf("\"%- 10.5d\"\n", i);
	printf("\"%+10.5d\"\n", i);
	printf("\"% 10.5d\"\n", i);
	printf("\"% d\"\n", i);
	//ft_printf("%u\n", i);
	//ft_printf("%X\n", i);

//	printf(" %-10d \n", 10);
//	printf(" %d \n", 10);
//	printf(" %-#10x \n", 10);
//	printf(" %#x \n", 10);
	return 0;
}
