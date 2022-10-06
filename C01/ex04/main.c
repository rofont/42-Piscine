/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:35:32 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/19 15:38:45 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        if (nb == -2147483648)
            write(1, "-2147483648", 11);
        else
        {
            ft_putchar('-');
            nb = nb * -1;
        }
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        nb = nb % 10;
    }
    if (nb >= 0)
        ft_putchar(nb + 48);
}

int main(void)
{
    int x;
    int y;
    int *ptr;
    int *ptr1;
    
    x = 203;
    y = 2;
    ptr = &x;
    ptr1 =&y;
    
    
    ft_putnbr(*ptr);
    ft_putchar('\n');
    ft_putnbr(*ptr1);
    ft_putchar('\n');
    ft_ultimate_div_mod(ptr, ptr1);
    ft_putnbr(*ptr);
    ft_putchar('\n');
    ft_putnbr(*ptr1);
    ft_putchar('\n');
    
    return 0;
    
}
