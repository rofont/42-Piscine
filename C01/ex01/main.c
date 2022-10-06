/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:32:22 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/19 11:49:47 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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

void ft_ultimate_ft (int *********nbr);

int	main(void)
{
    int a;
       a = 100;
       
       int *********nbr9;
       int ********nbr8;
       int *******nbr7;
       int ******nbr6;
       int *****nbr5;
       int ****nbr4;
       int ***nbr3;
       int **nbr2;
       int *nbr1;
       
       nbr1 = &a;
       nbr2 = &nbr1;
       nbr3 = &nbr2;
       nbr4 = &nbr3;
       nbr5 = &nbr4;
       nbr6 = &nbr5;
       nbr7 = &nbr6;
       nbr8 = &nbr7;
       nbr9 = &nbr8;
       
       ft_putnbr(*********nbr9);
       ft_ultimate_ft(nbr9);
       ft_putchar('\n');
       ft_putnbr(*********nbr9);
       
	return (0);
}
