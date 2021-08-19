/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:08:09 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/17 23:08:15 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{	
	char dest[50] = "Hello ";
	char src[50] = "World";

	char dest2[50] = "Hello ";
	char src2[50] = "World";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest2, src2));
	
}
*/
