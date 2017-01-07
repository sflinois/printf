/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:11:52 by sflinois          #+#    #+#             */
/*   Updated: 2016/12/21 11:30:57 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lsttmp;
	t_list	*lstret;

	if (lst == NULL || f == NULL)
		return (NULL);
	lsttmp = f(lst);
	if (!(lstret = ft_lstnew(lsttmp->content, lsttmp->content_size)))
		return (NULL);
	if (lst->next)
		lstret->next = ft_lstmap(lst->next, f);
	return (lstret);
}
