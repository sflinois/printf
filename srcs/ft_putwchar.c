/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 18:01:57 by sflinois          #+#    #+#             */
/*   Updated: 2017/02/09 18:05:35 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <unistd.h>
#include <locale.h>
#include <wchar.h>

void	ft_putwchar(wint_t wi)
{
	ft_putwchar_fd(wi, 1);
}
