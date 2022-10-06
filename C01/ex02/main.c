/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:47:59 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/19 13:57:08 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

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

void ft_swap(int *a, int *b);

int main(void)
{
    int x;
    int *ptr;
    int y;
    int *ptr1;
    
    x = 45;
    y = 40;
    
    ptr = &x;
    ptr1 = &y;
    
    ft_putnbr(*ptr);
    ft_putchar('\n');
    ft_putnbr(*ptr1);
    ft_putchar('\n');
    ft_swap(ptr, ptr1);
    ft_putchar('\n');
    ft_putnbr(*ptr);
    ft_putchar('\n');
    ft_putnbr(*ptr1);
    ft_putchar('\n');
    
    return 0;
    
}
