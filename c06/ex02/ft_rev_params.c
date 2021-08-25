/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:17:10 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/23 18:44:03 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	index;
	int	index2;

	index = argc - 1;
	while (index > 0)
	{
		index2 = 0;
		while (argv[index][index2] != '\0')
		{
			write(1, &argv[index][index2], 1);
			index2++;
		}
		write(1, "\n", 1);
		index--;
	}
}
