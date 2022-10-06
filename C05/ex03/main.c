/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:38:20 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/29 14:39:42 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_recursive_power(int nb, int power);

int main()
{
    
    printf("%d\n", ft_recursive_power(0, 0));
    printf("%d\n", ft_recursive_power(-4, -15647));
    printf("%d\n", ft_recursive_power(3, 1));
    printf("%d\n", ft_recursive_power(156, 4));
    printf("%d\n", ft_recursive_power(-14, 0));
    return 0;
}
