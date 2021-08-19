/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:36:45 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/18 23:37:29 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char  *str)
{
	while (*str)
		write(1, str++, 1);
}

// int main(void)
// {
// 	char    *str;

// 	str = "Hello World";
// 	ft_putstr(str);
// }
