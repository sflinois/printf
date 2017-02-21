/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:10:17 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/21 16:40:57 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <inttypes.h>
#include <locale.h>
#include <wchar.h>
#include "includes/libft.h"

int		main(void)
{
	ft_printf("%ls, %ls", L"ÊM-^ZM-^VÁM-^BM-^I", L"ŸM-^Dÿ≠ŸM-^E ÿÆŸM-^Fÿ≤ŸM-ÿ±");
	//printf("%lc", L'Ê');


/*	int	i;
	unsigned long	l;
	char	*str;

	printf("%p\n", &i);
	ft_printf("%p\n", &i);
	printf("%p\n", &l);
	ft_printf("%p\n", &l);
	printf("%p\n", &str);
	ft_printf("%p\n", &str);
	printf("%p\n", &strlen);
	ft_printf("%p\n", &strlen);
	printf("%p\n", 0);
	ft_printf("%p\n", 0);
*/

/*
	wint_t			c2;

	setlocale(LC_ALL, "");
	c2 = L'❤';
	ft_printf("%C\n",L'❤');
	printf("%C\n",L'❤');
*/
	// -+0 #123456789.123456789l ll h hh j z
/*
	setlocale(LC_ALL, "");
	unsigned char	c;
	wint_t			c2;

	c2 = L'❤';
	ft_putnbr(c2);
	write(1, &c2, 1);
	c = 0xe1;
	write(1, &c, 1);
	c = 0x88;
	write(1, &c, 1);
	c = 0xb4;
	write(1, &c, 1);
	c = 0x0a;
	write(1, &c, 1);
	c = 0;
	write(1, &c, 1);
	c = 36;
	write(1, &c, 1);



	ft_putnbr(MB_CUR_MAX);

	printf("%ls", L"❤✓☀★☂♞☯☭☢€☎∞❄♫₽\n");
	printf("%S", L"❤✓☀★☂♞☯☭☢€☎∞❄♫₽\n");
*/
	/*
	   uintmax_t		i = -1;
	   printf("%o\n", i);
	   printf("%hho\n", i);
	   printf("%ho\n", i);
	   printf("%lo\n", i);
	   printf("%llo\n", i);
	   printf("%jo\n", i);
	   printf("%zo\n\n", i);
	   ft_printf("%o\n", i);
	   ft_printf("%hho\n", i);
	   ft_printf("%ho\n", i);
	   ft_printf("%lo\n", i);
	   ft_printf("%llo\n", i);
	   ft_printf("%jo\n", i);
	   ft_printf("%zo\n", i);

*/

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
