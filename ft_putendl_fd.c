/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:36:50 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/06 15:12:02 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	slen;

	slen = ft_strlen(s);
	write(fd, s, slen);
	write(fd, "\n", 1);
}
/* 
int main()
{
	ft_putendl_fd("hello", 1);
	return 0;
} */