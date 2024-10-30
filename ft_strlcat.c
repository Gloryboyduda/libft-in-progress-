/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:59:34 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/29 18:21:45 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	(char *) src;
	while (src[i] && size > 0)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst));
}

 int main()
{
	char src[] = "world";
	char dst[] = "hello ";
	printf(":%ld:\n", ft_strlcat(dst, src, 5));
	printf(":%s:\n", dst);
}