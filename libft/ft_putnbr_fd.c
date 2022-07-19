/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:16:56 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/24 13:11:48 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int	len(long num);
int	ft_pow(int n, int exp);

void	ft_putnbr_fd(int nb, int fd)
{
	char	n;
	int		length;
	int		p;
	long	n_long;

	if (!nb)
	{
		write(fd, "0", 1);
		return ;
	}
	n_long = nb;
	if (n_long < 0)
	{
		write(fd, "-", 1);
		n_long *= -1;
	}
	length = len(n_long);
	while (length-- > 0)
	{
		p = ft_pow(10, length);
		n = '0' + (n_long / p);
		n_long %= p;
		write(fd, &n, 1);
	}
}

int	len(long n)
{
	long	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_pow(int n, int exp)
{
	int	aux;

	if (exp == 0)
		return (1);
	aux = n;
	while (exp-- > 1)
	{
		n *= aux;
	}
	return (n);
}
