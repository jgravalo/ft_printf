/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversorvoid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:50:01 by jgravalo          #+#    #+#             */
/*   Updated: 2023/04/20 16:28:36 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

size_t	intlenv(unsigned long long n);

char	conversion16v(unsigned long long n);

char	*ft_strcpy(char *dest, char *src);

char	*ft_negativev(unsigned long long n, char *c, int l);

char	*ft_positivev(unsigned long long n, char *c, int l);

char	*conversorvoid(unsigned long long n)
{
	char	*c;
	int		l;

	l = intlenv(n);
	c = malloc(l + 1);
	if (!c)
		return (0);
	if (!n)
	{
		ft_strcpy(c, "0x0\0");
		return (c);
	}
	ft_strcpy(c, "0x");
	if (n < 0)
		c = ft_negativev(n, c, l);
	else
		c = ft_positivev(n, c, l);
	c[intlenv(n)] = '\0';
	return (c);
}

size_t	intlenv(unsigned long long n)
{
	size_t	count;

	count = 0;
	if (!n)
		count = 3;
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
	return (count + 2);
}

char	*ft_positivev(unsigned long long n, char *c, int l)
{
	while (n > 0)
	{
		if (n % 16 >= 10)
			c[l - 1] = conversion16v(n % 16);
		else
			c[l - 1] = n % 16 + 48;
		n = n / 16;
		l--;
	}
	return (c);
}

char	*ft_negativev(unsigned long long n, char *c, int l)
{
	n = n * -1;
	while (n > 0)
	{
		if (n % 16 >= 10)
			c[l - 1] = conversion16v(n % 16);
		else
			c[l - 1] = n % 16 + 48;
		n = n / 16;
		l++;
	}
	return (c);
}

char	conversion16v(unsigned long long n)
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
