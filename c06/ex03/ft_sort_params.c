/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 00:08:52 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/20 00:09:07 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int tab_size(char   **argv)
{
    int count;

    count = 0;
    while (argv[count] != (void *)0)
        count++;
    return (count);
}

char    *sort_tab(char  **argv, int size)
{
    int     index;
    int     index2;
    char    saveChar[size];

    index = 0;
    index2 = 0;
    while (index < size - 1)
    {
        if (*argv[index] < *argv[index + 1])
        {
            index2 = 0;
            if (argv[index][index2] < argv[index + 1][index2])
            {
                saveChar[index] = *argv[index];
                argv[index] = argv[index + 1];
                argv[index + 1] = &saveChar[index];
            }
            index2++;
        }
        printf("%s\n", argv[index]);
        index++;
    }
    return (*argv);
}

int main(int    argc, char  **argv)
{
    int    size;
    int    index;
    (void) argc;
    (void) argv;

    index = 0;
    size = tab_size(argv);
    while (index < size)
    {
        sort_tab(argv, size);
        index++;
    }
}
