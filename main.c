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

int		main(void)
{
	int		ret;
	char		*test;

	test = 0;
	setlocale(LC_ALL, "");
	ret = printf("{%s}", test);
	printf("%d\n", ret);
	ret = printf("{%s}", "");
	printf("%d\n", ret);
	ret = printf("{%s}", "test");
	printf("%d\n", ret);
	ret = printf("{%#s}", "test");
	printf("%d\n", ret);
	ret = printf("{%s}", "test");
	printf("%d\n", ret);
	ret = printf("{%s}", "test");
	printf("%d\n", ret);
	ret = printf("{%s}", "test");
	printf("%d\n", ret);
	ret = printf("{%s}", "test");
	printf("%d\n", ret);
	return 0;
}
