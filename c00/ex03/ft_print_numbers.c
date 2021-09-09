/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:20:54 by dateixei          #+#    #+#             */
/*   Updated: 2021/09/09 22:20:54 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char    c;

    c = '0';
    while (c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}

int main()
{
    ft_print_numbers();
    return (0);
}