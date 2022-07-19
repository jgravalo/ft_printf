/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:16:00 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/25 13:31:05 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<string.h>

size_t	ft_strleni(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strleni(s);
	while (s_len > 0 && s[s_len] != (char)c)
		s_len--;
	if (s[s_len] != (char)c)
		return (0);
	return (&((char *)s)[s_len]);
}

size_t	ft_strleni(const char *str)
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
