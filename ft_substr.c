/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:41:58 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/03 21:16:52 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*source;
	char	*str;
	size_t	i;
	
	s = (char *) s;
	str = (char *)malloc(sizeof(len) * ft_strlen(source) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		str[i] = s[start];
		start++;

	}
	*str = '\0';
	return(str);
}
