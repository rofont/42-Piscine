/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:29:19 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/26 14:53:34 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
    int nb = 5;
    
    printf("%d\n", ft_iterative_factorial(nb));

    return 0;
}
