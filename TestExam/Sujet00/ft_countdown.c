/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:27:04 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/05 08:32:00 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}



int main(void)
{
    int i;
    
    i = 9;
    while (i >= 0)
    {
        ft_putchar(i + 48);
        i--;
    }
    ft_putchar('\n');
    return (0);
}