/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:23:55 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/25 02:14:17 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int	argc, char	**argv)
{
	int		n;

	(void) argc;
	n = 0;
	while (argv[0][n] != '\0')
	{
		write(1, &argv[0][n], 1);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}
