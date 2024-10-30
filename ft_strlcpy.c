/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:10:49 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/27 22:10:49 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	
	i = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && len > 0)
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	char src[] = "hello";
	char dest[10];
	printf("%ld", ft_strlcpy(dest, src, 5));
	printf("%s", dest);
	return 0;
} */