/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:29:05 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/28 12:31:53 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include<stdlib.h>

size_t	ft_strleny(const char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned long	j;

	if (!s)
		return (0);
	j = 0;
	if (start > ft_strleny(s))
	{
		s2 = malloc(sizeof(char));
		s2[0] = '\0';
		return (s2);
	}
	if (ft_strleny(s) - start < len)
		s2 = malloc(sizeof(char) * ft_strleny(s) - start + 1);
	else
		s2 = malloc(len + 1);
	if (!s2)
		return (0);
	while (j < len && s[start + j] != '\0')
	{
		s2[j] = s[start + j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}

size_t	ft_strleny(const char *str)
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
