/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:10:17 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/03 16:29:18 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "includes/libft.h"

int		main(void)
{
	int		i = -42;
	printf("%0+5d\n", i);
	printf("% 10.5d\n", i);
	printf("%+10.5d\n", i);
	printf("%-+10.5d\n", i);
	ft_printf("%0+5d\n", i);
	ft_printf("% 10.5d\n", i);
	ft_printf("%+10.5d\n", i);
	ft_printf("%-+10.5d\n", i);
/*
	printf("\"%d\" : ", i);
	printf("\"d\"\n", i);
	printf("\"%.d\" : ", i);
	printf("\".d\"\n", i);
	printf("\"%#d\" : ", i);
	printf("\"#d\"\n", i);
	printf("\"%#.d\" : ", i);
	printf("\"#.d\"\n", i);

	printf("\"%i\" : ", i);
	printf("\"i\"\n", i);
	printf("\"%.i\" : ", i);
	printf("\".i\"\n", i);
	printf("\"%#i\" : ", i);
	printf("\"#i\"\n", i);
	printf("\"%#.i\" : ", i);
	printf("\"#.i\"\n", i);

	printf("\"%o\" : ", i);
	printf("\"o\"\n", i);
	printf("\"%.o\" : ", i);
	printf("\".o\"\n", i);
	printf("\"%#o\" : ", i);
	printf("\"#o\"\n", i);
	printf("\"%#.o\" : ", i);
	printf("\"#.o\"\n", i);

	printf("\"%u\" : ", i);
	printf("\"u\"\n", i);
	printf("\"%.u\" : ", i);
	printf("\".u\"\n", i);
	printf("\"%#u\" : ", i);
	printf("\"#u\"\n", i);
	printf("\"%#.u\" : ", i);
	printf("\"#.u\"\n", i);

	printf("\"%x\" : ", i);
	printf("\"x\"\n", i);
	printf("\"%.x\" : ", i);
	printf("\".x\"\n", i);
	printf("\"%#x\" : ", i);
	printf("\"#x\"\n", i);
	printf("\"%#.x\" : ", i);
	printf("\"#.x\"\n", i);

	printf("\"%X\" : ", i);
	printf("\"X\"\n", i);
	printf("\"%.X\" : ", i);
	printf("\".X\"\n", i);
	printf("\"%#X\" : ", i);
	printf("\"#X\"\n", i);
	printf("\"%#.X\" : ", i);
	printf("\"#.X\"\n", i);
*/
	//ft_printf("%u\n", i);
	//ft_printf("%X\n", i);

//	printf(" %-10d \n", 10);
//	printf(" %d \n", 10);
//	printf(" %-#10x \n", 10);
//	printf(" %#x \n", 10);
	return 0;
}
