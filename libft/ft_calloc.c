/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:03:33 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/28 12:32:14 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_zero(void *str, size_t n);

void	*ft_calloc(size_t number, size_t size)
{
	void			*ptr;

	ptr = malloc(size * number);
	if (!ptr)
		return (0);
	ft_zero(ptr, size * number);
	return (ptr);
}

void	*ft_zero(void *str, size_t n)
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
