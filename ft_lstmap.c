/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duarte <duarte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:51:24 by duarte            #+#    #+#             */
/*   Updated: 2024/11/11 17:41:46 by duarte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;

	if (lst == NULL)
		return (NULL);
	map = (t_list *)malloc(sizeof(t_list));
	if (!map)
		return (NULL);
	while (lst->next != NULL)
	{
		if (lst->content == NULL)
		{
			ft_lstdelone(lst, del);
			free(lst->content);
		}
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
	*map = *lst;
	return (map);
}
