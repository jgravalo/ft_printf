/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:35:50 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/25 13:28:26 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

size_t	ft_strlent(const char *str)
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

void	ft_putstr_fd(char *s, int fd)
{
	int		l;

	l = ft_strlent(s);
	write(fd, s, l);
}
