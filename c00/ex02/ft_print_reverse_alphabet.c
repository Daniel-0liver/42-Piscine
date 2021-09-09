/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:17:29 by dateixei          #+#    #+#             */
/*   Updated: 2021/09/09 22:17:29 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    c;

    c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c);
        c--;
    }
}

int main()
{
    ft_print_alphabet();
    return (0);
}