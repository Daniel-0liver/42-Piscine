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
	char	c[] = "Hello World";
	int		index = 0;

	while (c[index])
	{
		ft_putchar(c[index]);
		index++;
	}
	return (0);
}