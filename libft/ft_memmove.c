/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:34:39 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/23 16:42:00 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *ds, const void *src, size_t len)
{
	void	*aux;
	size_t	i;

	if (!ds && !src && len)
		return (0);
	aux = ds;
	i = 0;
	if (ds < src)
	{
		while (i < len)
		{
			((unsigned char *)ds)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((unsigned char *)ds)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	return (aux);
}
