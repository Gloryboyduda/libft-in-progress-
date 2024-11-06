/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:04:22 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/06 19:44:54 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_strmapi char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
-
s: The string on which to iterate.
f: The function to apply to each character.

The string created from the successive applications of ’f’.

Returns NULL if the allocation fails.

malloc

Applies the function f to each character of the string s, passing its index as the first argument
and the character itself as the second.
A new string is created (using malloc(3)) to collect the results from the successive 
applications of f.*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*source;
	char	*mapi;

	i= 0;
	source = (char *) s;
	if (!s)
		return (NULL);
	mapi = malloc(ft_strlen(source) + 1);
	if (!mapi)
		return (NULL);
	while (source[i])
	{
		mapi[i] = f(i, source[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}

char fall(unsigned int l, char c)
{
	return (c + l);
}
int main()
{
	char test[] = "hello";
	printf("%s", ft_strmapi(test, fall));
}