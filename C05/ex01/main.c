/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:54:35 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/27 08:38:43 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_recursive_factorial(int nb);

int main()
{
    int i;
    
    i = 5;
    printf("%d\n", ft_recursive_factorial(i));

    return 0;
}
