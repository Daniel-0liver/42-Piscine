/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:09:40 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/17 23:09:48 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while (b < nb && src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{	
	char dest[50] = "Hello ";
	char src[50] = "World ";

	char dest1[50] = "Hello ";
	char src1[50] = "World";

	unsigned int nb = 5;

	printf("%s\n", ft_strncat(dest, src, nb));
	printf("%s\n", strncat(dest1, src1, nb));
	return(0);
}
*/
