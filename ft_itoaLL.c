/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaLL.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:47:04 by jgravalo          #+#    #+#             */
/*   Updated: 2022/04/05 17:54:26 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

size_t	intlenll(unsigned int n);

char	*ft_strcpy(char *dest, char *src);

char	*ft_negativell(unsigned int n, char *c, int l);

char	*ft_positivell(unsigned int n, char *c, int l);

char	*ft_itoall(unsigned int n)
{
	char	*c;
	int		l;

	l = intlenll(n);
	c = malloc(l + 1);
	if (!c)
		return (0);
	if (n == 0)
		ft_strcpy(c, "0\0");
	if (n < 0)
		c = ft_negativell(n, c, l);
	else
		c = ft_positivell(n, c, l);
	c[intlenll(n)] = '\0';
	return (c);
}

size_t	intlenll(unsigned int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}	
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_positivell(unsigned int n, char *c, int l)
{
	while (n > 0)
	{
		c[l - 1] = n % 10 + 48;
		n = n / 10;
		l--;
	}
	return (c);
}

char	*ft_negativell(unsigned int n, char *c, int l)
{
	n += 4294967296;
	c = ft_positivell(n, c, l);
	return (c);
}
