/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:57:01 by dateixei          #+#    #+#             */
/*   Updated: 2021/09/09 22:57:01 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void    ft_is_negative(int  n)
{
    if (n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}

int main()
{
    int	n;

	n = 0;
	ft_is_negative(n);
	return (0);
}
