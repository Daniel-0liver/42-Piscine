/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 00:20:13 by dateixei          #+#    #+#             */
/*   Updated: 2021/09/13 00:20:13 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_array(int	array[], int	n)
{
	int	index;

	while (array[n - 1] <= 9)
	{
		index = 0;
		while (index < n)
		{
			ft_putchar(array[index] + '0');
			index++;
		}
		write(1, ", ", 2);
		array[n - 1]++;
	}
}

void    ft_print_combn(int  n)
{
    int array[n];
	int	index;

	index = -1;
	while (index++ < n)
		array[index] = index;
	index = 0;
	ft_print_array(array, n);
}

int main(void)
{
	ft_print_combn(1);
}