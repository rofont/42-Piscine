/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:54:31 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/21 15:16:53 by rofontai         ###   ########.fr       */
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

int	*ft_strcapitalize(char *str);

int    main(void)
{
    
    char    phrase[] = "salut, commM:nt tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_putstr(phrase);
    ft_putchar('\n');
	ft_strcapitalize(phrase);
	ft_putstr(phrase);
   
    return (0);
}
