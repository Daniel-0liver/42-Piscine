/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:51:53 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/23 18:42:08 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int	argc, char	**argv)
{
	int	index;
	int	index2;

	(void)argc;
	index = 1;
	while (argv[index] != (void *)0)
	{
		index2 = 0;
		while (argv[index][index2] != '\0')
		{
			write(1, &argv[index][index2], 1);
			index2++;
		}
		write(1, "\n", 1);
		index++;
	}
}
