/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:56:37 by jgravalo          #+#    #+#             */
/*   Updated: 2023/04/17 14:17:48 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdarg.h>
#include"libft/libft.h"
#include"ft_printf.h"

int	conditions(const char *c, va_list args);

int	charc(char c);

size_t	ft_printf(const char *s, ...)
{
	size_t	i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			count += conditions((&s[i + 1]), args);
			i++;
		}
		else
			count += charc((char)s[i]);
		i++;
	}
	va_end(args);
	return (count);
}
