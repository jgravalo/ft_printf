/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:03:48 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/03 12:55:57 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned long	lenth;
	unsigned long	i;

	lenth = 0;
	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
		lenth++;
	}
	i = 0;
	while ((i + 1) < size && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (size > 0)
		*(dest + i) = '\0';
	return (lenth);
}
