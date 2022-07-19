/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:40:50 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/23 16:54:26 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

size_t	ft_strlenl(const char *str)
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlenl(dst);
	src_len = ft_strlenl(src);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	i = 0;
	while (dstsize - 1 > dst_len + i && src[i])
	{
		dst[dst_len + i] = ((char *)src)[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
