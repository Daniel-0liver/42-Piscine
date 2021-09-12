/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:14:25 by dateixei          #+#    #+#             */
/*   Updated: 2021/09/10 23:14:25 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_until_9899(int	num1, int	num2)
{
	if (num1 == 98 && num2 == 99)
	{
		ft_putchar(num1 / 10 + '0');
		ft_putchar(num1 % 10 + '0');
		ft_putchar(' ');
		ft_putchar(num2 / 10 + '0');
		ft_putchar(num2 % 10 + '0');
	}
	else
	{
		ft_putchar(num1 / 10 + '0');
		ft_putchar(num1 % 10 + '0');
		ft_putchar(' ');
		ft_putchar(num2 / 10 + '0');
		ft_putchar(num2 % 10 + '0');
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_until_9899(num1, num2);
			num2++;
		}
		num1++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}