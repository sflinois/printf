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

	ret = ft_printf("%.p, %.0p", 1, 1);
	ft_putnbr(ret);
	return 0;
}
