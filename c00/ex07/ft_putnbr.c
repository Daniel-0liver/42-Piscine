/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:42:42 by dateixei          #+#    #+#             */
/*   Updated: 2021/09/12 18:42:42 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	int rest;

	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	rest = nb % 10;
	if (nb > 99)
	{
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar(rest + '0');
	}
	else if (nb > 9)
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(rest + '0');
	}
	else 
		ft_putchar(nb + '0');
}

int main(void)
{
	int nb = -2147483647;

	ft_putnbr(nb);
	return (0);
}