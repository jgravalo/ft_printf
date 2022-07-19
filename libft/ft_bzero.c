/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:02:29 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/28 12:31:30 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_bzero(void *str, size_t n)
{
	char			*s;
	unsigned long	i;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		*s = '\0';
		s++;
		i++;
	}
	return (s);
}
