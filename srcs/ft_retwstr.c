/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 15:57:11 by sflinois          #+#    #+#             */
/*   Updated: 2017/03/13 11:03:17 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include "../includes/libft.h"

char	*ft_retwstr(wchar_t *wstr)
{
	char	*ret;
	char	*tmp;
	char	*tmp2;

	if (!wstr)
		return (NULL);
	ret = ft_strdup("");
	while (*wstr)
	{
		tmp = ret;
		tmp2 = ft_retwchar(*wstr);
		ret = ft_strjoin(tmp, tmp2);
		free(tmp);
		free(tmp2);
		wstr++;
	}
	return (ret);
}

size_t	ft_wstrlen(wchar_t *wstr)
{
	size_t	len;

	len = 0;
	while (wstr[len])
		len++;
	return (len);
}
