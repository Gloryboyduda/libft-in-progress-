/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:48:16 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/31 15:11:41 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*source;

	i = 0;
	source = (unsigned char *) s;
	if (*source == '\0' || n == 0)
		return (NULL);
	while (i < n)
	{
		if (source[i] == (unsigned char) c)
			return ((void *)(source + i));
		i++;
	}
	return (NULL);
}
/* int main()
{
	char s[] = "Hello";
	printf("%p\n", memchr(s, 'o', 5));
	printf("%p", ft_memchr(s, 'o', 5));
	return 0;
} */