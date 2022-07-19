/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:11:10 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/28 13:04:13 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char			*a;
	char			*b;
	unsigned long	i;

	if (!dest && !src && count)
		return (0);
	i = 0;
	a = (char *)src;
	b = (char *)dest;
	while (i < count)
	{
		*(b + i) = *(a + i);
		i++;
	}
	return (b);
}
