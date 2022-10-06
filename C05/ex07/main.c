/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:09:09 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/29 15:44:53 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int ft_find_next_prime(int nb);

int main(void)
{
    int start = clock();
    
    printf("%d\n", ft_find_next_prime(307278));

    int end = clock();

    printf("%d\n%d", start, end);
}
