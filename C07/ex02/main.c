/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:13:56 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/03 10:51:14 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*int ft_ultimate_range(int **range, int min, int max);

int		main()
{
	int start;
	int end;

	start = 15;
	end = 30;
	int *array;

	array = (int *)malloc(sizeof(int) * (end - start));
	printf("%d\n", ft_ultimate_range(&array, start, end));
	
}
	int i = 0;

	
	
	while(i < end - start)
	{
		printf("%d", array[i]);
        printf("\n");
		i++;
	}
    free(array);
    return (0);
}*/

#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *tab;
	int **range;
	int lenght;
	int i;

	range = &tab;
	
	i = 0;
	lenght = ft_ultimate_range(range, 10, 20);
	printf("%d lenght \n", lenght);
	while (i < lenght)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}