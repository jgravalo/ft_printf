/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:13:23 by jgravalo          #+#    #+#             */
/*   Updated: 2022/02/25 14:22:27 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t'
		|| *str == '\v' || *str == '\n'
		|| *str == '\r' || *str == '\f')
		str++;
	if (!(*str == '-' || *str == '+'
			|| (*str >= '0' && *str <= '9')))
		return (0);
	if (*str == '-')
		sign = -1;
	if ((*str == '-') || (*str == '+'))
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (sign * result);
}
