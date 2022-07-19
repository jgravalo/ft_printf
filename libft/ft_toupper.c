/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:40:23 by jgravalo          #+#    #+#             */
/*   Updated: 2022/03/30 15:56:13 by jgravalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c = c - 32;
	return (c);
}
