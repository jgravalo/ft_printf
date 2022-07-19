/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversor1016.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:31:56 by jgravalo          #+#    #+#             */
/*   Updated: 2022/04/05 17:49:34 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

size_t	intlen16(long n);

char	conversion16(long n);

char	*ft_strcpy(char *dest, char *src);

char	*ft_negative16(long n, char *c, int l);

char	*ft_positive16(long n, char *c, int l);

char	*conversor1016(long n)
{
	char	*c;
	int		l;

	l = intlen16(n);
	c = malloc(l + 1);
	if (!c)
		return (0);
	if (n == 0)
		ft_strcpy(c, "0\0");
	if (n < 0)
		c = ft_negative16(n, c, l);
	else
		c = ft_positive16(n, c, l);
	c[intlen16(n)] = '\0';
	return (c);
}

size_t	intlen16(long n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count = 1;
	if (n == -2147483647 - 1)
		count = 9;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}	
	while (n > 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

char	*ft_positive16(long n, char *c, int l)
{
	while (n > 0)
	{
		if (n % 16 >= 10)
			c[l - 1] = conversion16(n % 16);
		else
			c[l - 1] = n % 16 + 48;
		n = n / 16;
		l--;
	}
	return (c);
}

char	*ft_negative16(long n, char *c, int l)
{
	n = n * -1;
	while (n > 0)
	{
		if (n % 16 >= 10)
			c[l - 1] = conversion16(n % 16);
		else
			c[l - 1] = n % 16 + 48;
		n = n / 16;
		l++;
	}
	return (c);
}

char	conversion16(long n)
{
	char	c;	

	if (n == 10)
		c = 'a';
	if (n == 11)
		c = 'b';
	if (n == 12)
		c = 'c';
	if (n == 13)
		c = 'd';
	if (n == 14)
		c = 'e';
	if (n == 15)
		c = 'f';
	return (c);
}
