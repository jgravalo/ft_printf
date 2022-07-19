/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:12:01 by jgravalo          #+#    #+#             */
/*   Updated: 2022/04/05 18:29:59 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include"libft/libft.h"

char	*conversor1016(int n);

char	*conversorvoid(unsigned long long v);

char	*ft_itoall(unsigned int n);

int		ft_putchar(char c);

int		ft_putstr(char *str);

int	charc(char a)
{
	write(1, &a, 1);
	return (1);
}

int	charstr(char *b)
{
	int	count;

	if (b == NULL)
	{
		count = ft_putstr("(null)");
		return (count);
	}
	count = ft_putstr(b);
	return (count);
}

int	low16(int n)
{
	char	*x;
	int		count;

	if (n < 0)
		n += 4294967296;
	x = conversor1016(n);
	count = ft_putstr(x);
	free(x);
	return (count);
}

int	up16(unsigned int n)
{
	char	*x2;
	int		count;
	size_t	i;

	i = 0;
	x2 = conversor1016(n);
	while (x2[i])
	{
		x2[i] = ft_toupper(x2[i]);
		i++;
	}
	count = ft_putstr(x2);
	free(x2);
	return (count);
}

int	ptr16(void *v)
{
	char	*i;
	int		count;

	i = conversorvoid((unsigned long long)v);
	count = ft_putstr(i);
	free(i);
	return (count);
}
