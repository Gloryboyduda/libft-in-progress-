/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:59:34 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/31 15:07:56 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen || size == 0)
		return (size + slen);
	while (src[i] && dlen + i < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/* int main()
{
	char src[] = "world";
	char dst[12] = "hello ";
	char dst2[12] = "hello ";
	printf(":%ld:\n", ft_strlcat(dst, src, 10));
	printf(":%s:\n", dst);
	printf(":%ld:\n", strlcat(dst2, src, 10));
	printf(":%s:\n", dst2);
	return 0;
} */