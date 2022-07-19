/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:51:26 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/22 18:01:06 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	static	inset(char const c, char const *set);
char	static	*null_or_empty(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	if (!s1 || !set || !s1[0] || !set[0])
		return (null_or_empty(s1, set));
	i = 0;
	while (s1[i] && inset(s1[i], set))
		i++;
	len = ft_strlen(s1);
	if (i == len)
		return ((char *)ft_calloc(1, sizeof(char)));
	while (len >= 0 && inset(s1[len], set))
		len--;
	str = (char *)ft_calloc(len - i + 2, sizeof(char));
	if (!str)
		return (0);
	j = 0;
	while (j + i <= len)
	{
		str[j] = s1[i + j];
		j++;
	}
	return (str);
}

int	static	inset(char const c, char const *set)
{
	while (*set && c != *set)
		set++;
	if (c == *set)
		return (1);
	return (0);
}

char	static	*null_or_empty(char const *s1, char const *set)
{
	if (!s1 || !set)
		return (0);
	else
		return (ft_strdup(s1));
}
