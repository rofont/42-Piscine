/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:20:35 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/29 15:24:43 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int ft_sqrt(int nb);

int main()
{
   int start = clock(); 

    printf("%d\n", ft_sqrt(16));

    int end = clock();
printf("%d\n%d", start, end);
    return 0;
}
