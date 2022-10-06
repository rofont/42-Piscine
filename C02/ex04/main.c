/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:54:31 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/21 11:36:22 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
       write (1, &c, 1);
}

void    ft_putstr(char *str)
{
    int    x;

    x = 0;
    while (str[x] != '\0')
    {
        ft_putchar(str[x]);
        x++;
       }
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

int	ft_str_is_lowercase(char *str);

int    main(void)
{
    
    char    phrase[] = "a-dnadadc154";
    ft_putstr(phrase);
    ft_putchar('\n');
    ft_putnbr(ft_str_is_lowercase(phrase));
   
    return (0);
}
