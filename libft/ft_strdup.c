/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:34:42 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/28 12:32:03 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen20(char *str);

char	*ft_strcpy20(char *dest, char *src);

char	*ft_strdup(const char *s)
{
	char	*d;
	char	*c;

	c = (char *)s;
	d = malloc(ft_strlen20(c) + 1);
	if (d == NULL)
		return (0);
	ft_strcpy20(d, c);
	return (d);
}

int	ft_strlen20(char *str)
{
	int		count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strcpy20(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
