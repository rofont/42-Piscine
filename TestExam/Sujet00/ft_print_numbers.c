/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:33:43 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/05 08:45:21 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}




void    ft_print_numbers(void)
{
    int i;

    i = 0;
    while (i <= 9)
    {
        ft_putchar(i + 48);
        i++;
    }
}


int main(void)
{
    ft_print_numbers();
    return (0);
}