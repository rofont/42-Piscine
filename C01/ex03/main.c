/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:59:05 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/19 15:04:29 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

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

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int x;
    int y;
    int *ptr;
    int *ptr1;
    
    x = 154;
    y = 5;
    ptr = &x;
    ptr1 =&y;
    
    
    ft_putnbr(x);
    ft_putchar('\n');
    ft_putnbr(y);
    ft_putchar('\n');
    ft_div_mod(x, y, ptr, ptr1);
    ft_putnbr(x);
    ft_putchar('\n');
    ft_putnbr(y);
    ft_putchar('\n');
    
    return 0;
    
}
