/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:43:38 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/25 13:28:38 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

size_t	ft_strlenf(const char *str)
{
	unsigned long	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

void	ft_putendl_fd(char *s, int fd)
{
	int		l;

	l = ft_strlenf(s);
	write(fd, s, l);
	write(fd, "\n", 1);
}
