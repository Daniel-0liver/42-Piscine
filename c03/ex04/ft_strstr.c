/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 01:00:38 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/18 01:00:50 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*strin;
	char	*need;
	int		index;

	if (*to_find == '\0')
		return (str);
	strin = str;
	need = to_find;
	index = 0;
	while (str[index] != '\0')
	{
		if (*need == '\0')
			return ((char *)(strin - (need - to_find)));
		if (*strin == *need)
			need++;
		else
			need = to_find;
		if (*strin == '\0')
			break ;
		strin++;
	}
	return (0);
}

/*
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int		main(void)
{
	char *strin;
	char *need;
	char *result_c;
	char *result_ft;

	strin = "Hello World";
	need = "World";
	result_c = strstr(strin, need);
	result_ft = ft_strstr(strin, need);
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}
*/