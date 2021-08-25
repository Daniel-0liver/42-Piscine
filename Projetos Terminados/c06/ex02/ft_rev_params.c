/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:17:10 by dateixei          #+#    #+#             */
/*   Updated: 2021/08/19 21:21:48 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int count_tab(char  **argv)
{
    int count;
    
    count = 0;
    while (argv[count] != (void *)0)
        count++;
    return(count);
}

char    *rev_tab(char    **tab, int    size)
{
    char    saveTab[size];
    int     index;
    int     index2;

    index = 1;
    index2 = 0;
    while (size > 1)
    { 
        size--;
        printf("%s\n", tab[size]);
    }
    return(*tab);
}

int main(int    argc,char   **argv)
{
    (void) argc;
    (void) argc;
    int index;
    int index2;
    int size;

    index = 1;
    size = count_tab(argv);
    rev_tab(argv, size);
}
