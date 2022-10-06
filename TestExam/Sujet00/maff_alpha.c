/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:07:04 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/05 09:13:55 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int main(void)
{
    int i;
    
    i = 'a';
    while(i <= 'z')
    {
        if (i % 2 == 0)
            ft_putchar(i - 32);
        else
            ft_putchar(i);
        i++;
    }
    return (0);
}