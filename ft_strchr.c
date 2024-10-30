/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:25:53 by duandrad          #+#    #+#             */
/*   Updated: 2024/10/29 15:57:12 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return (str + i);
		else
			i++;
	}
	if (c == '\0')
		return (str + i);
	return (NULL);
}
/* 
int main()
{
	char test[] = "hello world";
	printf(";%s;\n", ft_strchr(test, 'o'));
	printf(";%s;\n", strchr(test, 'o'));
	return 0;
}  */