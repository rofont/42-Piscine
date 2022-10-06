/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:13:56 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/03 10:49:13 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int		main()
{
	int start;
	int end;

	start = 10;
	end = 20;
	int *array;

	array = ft_range(start, end);
	int i = 0;
	while(i < end - start)
	{
		printf("%d", array[i]);
        printf("\n");
		i++;
	}
    free(array);
    return (0);
}