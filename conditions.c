/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:17:50 by jgravalo          #+#    #+#             */
/*   Updated: 2022/04/05 18:21:45 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft/libft.h"
#include"ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*conversor1016(int n);

char	*conversorvoid(unsigned long long v);

char	*ft_itoall(unsigned int n);

int		ft_putchar(char c);

int		ft_putstr(char *str);

int		charc(char a);

int		charstr(char *b);

int		low16(int n);

int		up16(unsigned int n);

int		ptr16(void *v);

int	n10(int n)
{
	char	*j;
	int		count;

	j = ft_itoa(n);
	count = ft_putstr(j);
	free(j);
	return (count);
}

int	int10(int n)
{
	char	*l;
	int		count;

	l = ft_itoa(n);
	count = ft_putstr(l);
	free(l);
	return (count);
}

int	unint10(unsigned int n)
{
	char	*m;
	int		count;

	m = ft_itoall(n);
	count = ft_putstr(m);
	free(m);
	return (count);
}

int	conditions(const char *c, va_list args)
{
	if (*c == 'c')
		return (charc(va_arg(args, int)));
	else if (*c == 's')
		return (charstr(va_arg(args, char *)));
	else if (*c == 'p')
		return (ptr16(va_arg(args, void *)));
	else if (*c == 'd')
		return (n10(va_arg(args, int)));
	else if (*c == 'i')
		return (int10(va_arg(args, int)));
	else if (*c == 'u')
		return (unint10(va_arg(args, int)));
	else if (*c == 'x')
		return (low16(va_arg(args, int)));
	else if (*c == 'X')
		return (up16(va_arg(args, int)));
	else if (*c == '%')
		return (ft_putchar('%'));
	else
		return (charc((char)c));
}
