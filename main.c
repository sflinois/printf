/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:10:17 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/11 14:12:43 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "includes/libft.h"

int		main(void)
{

	ft_printf(" %-10d \n", 10);
	ft_printf(" %d \n", 10);
	ft_printf(" %-#10x \n", 10);
	ft_printf(" %#x \n", 10);
	printf(" %-10d \n", 10);
	printf(" %d \n", 10);
	printf(" %-#10x \n", 10);
	printf(" %#x \n", 10);
	return 0;
}
