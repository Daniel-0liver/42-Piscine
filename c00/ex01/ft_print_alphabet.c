/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:53:17 by dateixei          #+#    #+#             */
/*   Updated: 2021/09/09 21:53:17 by dateixei         ###   ########.fr       */
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

    c = 'a';
    while (c <= 'z')
    {
        ft_putchar(c);
        c++;
    }
}

int main()
{
    ft_print_alphabet();
    return (0);
}