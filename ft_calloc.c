/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:14:54 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/02 18:16:11 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	*ft_calloc(size_t __nmemb, size_t __size)
{
	
}

=======
void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return(ptr);
}

/* int main()
{
	char test[] = "hello";
	printf("%s", ft_calloc(5, 2));
	return 0;
} */
>>>>>>> origin/HEAD
