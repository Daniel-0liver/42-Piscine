/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:43:36 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/18 22:44:20 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char  *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

// int	main(void)
// {
// 	char *str;

// 	str = "Hello World";
// 	printf("c  : %lu\n", strlen(str));
// 	printf("ft : %d\n", ft_strlen(str));
// }