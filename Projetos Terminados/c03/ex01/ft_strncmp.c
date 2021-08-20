/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:07:47 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/17 23:07:53 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{	
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char s1[20] = "Hello ";
// 	char s2[20] = "Hello ";
// 	char s11[20] = "Hello ";
// 	char s22[20] = "World";

// 	int n = 5;
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d\n", strncmp(s11, s22, n));
// }
