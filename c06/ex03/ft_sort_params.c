/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 00:08:52 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/25 01:21:25 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] != '\0') || (s2[index] != '\0'))
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (0);
		index++;
	}
	return (0);
}

char	*ft_sort_params(int	argc, char	**argv)
{
	int		index;
	int		comp;
	int		cont;
	char	*saveTab[100];

	cont = 0;
	while (cont <= argc)
	{
		index = 1;
		while (index < argc - 1)
		{
			comp = ft_strcmp(argv[index], argv[index + 1]);
			if (comp == 1 && index < argc - 1)
			{
				saveTab[index] = argv[index + 1];
				argv[index + 1] = argv[index];
				argv[index] = saveTab[index];
			}
			index++;
		}
		cont++;
	}
	return (*argv);
}

int	main(int	argc, char	**argv)
{
	int		index;
	int		index2;

	*argv = ft_sort_params(argc, argv);
	index = 1;
	while (argv[index])
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
