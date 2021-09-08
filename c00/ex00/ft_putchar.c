/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:34:30 by dateixei            #+#    #+#             */
/*   Updated: 2021/09/08 23:34:30 by dateixei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int main()
{
	char	c;

	c = 'H';
	ft_putchar(c);
	c = 'e';
	ft_putchar(c);
	c = 'l';
	ft_putchar(c);
	c = 'l';
	ft_putchar(c);
	c = 'o';
	ft_putchar(c);
	c = ' ';
	ft_putchar(c);
	c = 'W';
	ft_putchar(c);
	c = 'o';
	ft_putchar(c);
	c = 'r';
	ft_putchar(c);
	c = 'l';
	ft_putchar(c);
	c = 'd';
	ft_putchar(c);
}