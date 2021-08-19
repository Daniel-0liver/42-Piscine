/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 00:22:20 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/19 02:20:45 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

bool	is_in_string(char	c, char	*str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	is_space(char	c)
{
	return (is_in_string(c, "\t\n\v\f\r "));
}

bool	is_operator(char	c)
{
	return (is_in_string(c, "+-"));
}

bool	is_number(char	c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char	*str)
{
	int	m;
	int	result;

	result = 0;
	m = 1;
	while (is_space(*str))
		str++;
	while (is_operator(*str))
	{
		if (*str == '-')
			m *= -1;
		str++;
	}
	while (is_number(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * m);
}

// int		main(void)
// {
// 	char *str;

// 	str = " --+-+12354ab567";
// 	printf("%d\n", ft_atoi(str));
// }