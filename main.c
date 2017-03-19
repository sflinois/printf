/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:10:17 by sflinois          #+#    #+#             */
/*   Updated: 2017/03/19 14:10:02 by sflinois         ###   ########.fr       */
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

/*
 *
 * todo
 *
 * Check return values 
 *
 * 1 : write() '\0' when %c with 0
 *  OK
 * 2 : apply precision on %S and return !
 *
 * 3 : apply precision on %p *undefine*
 *
 * 4: flag 0 with %p && %s
 *
*/

int		main(void)
{
	int		ret;

	setlocale(LC_ALL, "");
	ret = printf("{%#o}", 42);
	printf("%d\n", ret);
	ret = printf("{%#O}", 42);
	printf("%d\n", ret);
	ret = printf("{%#x}", 42);
	printf("%d\n", ret);
	ret = printf("{%#X}", 42);
	printf("%d\n", ret);
	ret = printf("{%#p}", 42);
	printf("%d\n", ret);

	ret = ft_printf("{%#o}", 42);
	ft_printf("%d\n", ret);
	ret = ft_printf("{%#O}", 42);
	ft_printf("%d\n", ret);
	ret = ft_printf("{%#x}", 42);
	ft_printf("%d\n", ret);
	ret = ft_printf("{%#X}", 42);
	ft_printf("%d\n", ret);
	ret = ft_printf("{%#p}", 42);
	ft_printf("%d\n", ret);
//	ret = printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S\n", L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ", L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");;
//	ret = printf("p%.10ls", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B\n");
//	printf("%d\n", ret);
//	ret = ft_printf("f%.10ls", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B\n");
//	printf("%d\n", ret);


//	ret = printf("%c\n", L'米');
//	ret = printf("hh %hhc\n", L'米');
//	printf("%d\n", ret);
//	ret = printf("h %hc\n", L'米');
//	printf("%d\n", ret);
//	printf("%d\n", ret);
//	ret = printf("ll %llc\n", L'米');
//	printf("%d\n", ret);
//	ret = printf("j %jc\n", L'米');
//	printf("%d\n", ret);
//	ret = printf("z %zc\n", L'米');
//	printf("%d\n", ret);
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
