/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:09:13 by dateixei          #+#    #+#             */
/*   Updated: 2021/09/09 23:09:13 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void    ft_print_minus_than_789(int num1, int   num2, int   num3)
{
    ft_putchar(num1 + '0');
    ft_putchar(num2 + '0');
    ft_putchar(num3 + '0');
    write(1, ", ", 2);
}

void    ft_print_789(int	num1, int	num2, int	num3)
{
	ft_putchar(num1 + '0');
    ft_putchar(num2 + '0');
    ft_putchar(num3 + '0');
}

void    ft_print_comb(void)
{
    int num1;
    int num2;
    int num3;

    num1 = 0;
    while (num1 <= 7)
    {
        num2 = num1 + 1;
        while (num2 <= 8)
        {
            num3 = num2 + 1;
            while (num3 <= 9)
            {
				if (num1 == 7 && num2 == 8 && num3 == 9)
					ft_print_789(num1, num2, num3);
				else
					ft_print_minus_than_789(num1, num2, num3);
                num3++;
            }
            num2++;
        }
        num1++;
    }
}

int main()
{
    ft_print_comb();
    return (0);
}