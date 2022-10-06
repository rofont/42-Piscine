/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:19:48 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/29 14:37:29 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_iterative_power(int nb, int power);

int main()
{

    
    printf("%d\n", ft_iterative_power(0, 0));
    printf("%d\n", ft_iterative_power(-14, -15243));
    printf("%d\n", ft_iterative_power(3, 1));
    printf("%d\n", ft_iterative_power(4, 2));
 

    return 0;
}
