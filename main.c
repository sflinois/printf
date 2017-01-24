/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:10:17 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/24 12:49:52 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#include "includes/libft.h"

int		main(void)
{
	long long int	i = 922337203600000000;
	printf("%hhd\n", i);
	printf("%hd\n", i);
	printf("%d\n", i);
	printf("%ld\n", i);
	printf("%lld\n", i);
	printf("%jd\n", i);
	printf("%zd\n", i);
//	printf(" %-10d \n", 10);
//	printf(" %d \n", 10);
//	printf(" %-#10x \n", 10);
//	printf(" %#x \n", 10);
	return 0;
}
