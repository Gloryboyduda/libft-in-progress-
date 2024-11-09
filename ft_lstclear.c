/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duarte <duarte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:19:37 by duarte            #+#    #+#             */
/*   Updated: 2024/11/09 23:00:31 by duarte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*deleter;

	if (!*lst)
		return ;
	while (*lst)
	{
		deleter = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = deleter;
	}
	*lst = 0;
}
