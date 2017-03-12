/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:10:17 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/23 17:31:33 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <inttypes.h>
#include <locale.h>
#include <wchar.h>
#include "includes/libft.h"
#include <fcntl.h>

int		main(void)
{
	int		ret;

	ret = ft_printf("%s%s%s%s%s%s%s%s");
/*
	ft_printf("\nft_printf :\n");
	ret = ft_printf("f{%3c}", 0);
	ft_printf("> %d\n", ret);
	ret = ft_printf("f{%03c}", 0);
	ft_printf("> %d\n", ret);
	ret = ft_printf("f{%-15Z}", 123);
	ft_printf("> %d\n", ret);
	ret = ft_printf("f%#O", 1);
	ft_printf("> %d\n", ret);
	ret = ft_printf("f{% c}", 0);
	ft_printf("> %d\n", ret);
	ret = ft_printf("f%.4O", 42);
	ft_printf("> %d\n", ret);
	ret = ft_printf("f%.4S", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	ft_printf("> %d\n", ret);
	ret = ft_printf("f%.0p, %.p", 0, 0);
	ft_printf("> %d\n", ret);
	ret = ft_printf("f%.p, %.0p", 0, 0);
	ft_printf("> %d\n", ret);

	printf("\nprintf :\n");
	ret = printf("p{%3c}", 0);
	printf("> %d\n", ret);
	ret = printf("p{%03c}", 0);
	printf("> %d\n", ret);
	ret = printf("p{%-15Z}", 123);
	printf("> %d\n", ret);
	ret = printf("p%#O", 1);
	printf("> %d\n", ret);
	ret = printf("p{% c}", 0);
	printf("> %d\n", ret);
	ret = printf("p%.4O", 42);
	printf("> %d\n", ret);
	ret = printf("p%S", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("> %d\n", ret);
	ret = printf("p%.0p, %.p",  0, 0);
	printf("> %d\n", ret);
	ret = printf("p%.p, %.0p", 0, 0);
	printf("> %d\n", ret);*/
	return 0;
}
