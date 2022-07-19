/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:52:13 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/28 12:32:35 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!to_find[0])
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j] && i + j < n)
		{
			j++;
		}
		if (!to_find[j])
			return (&((char *)str)[i]);
		i++;
	}
	return (0);
}
