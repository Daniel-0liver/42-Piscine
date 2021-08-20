/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:51:53 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/19 21:14:14 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int	argc,char	**argv)
{
	(void)	argc;
	(void)	argv;
	int	index;
	int	index2;

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
