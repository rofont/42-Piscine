/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:09:37 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/20 15:10:18 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int a)
{
	if (a > 9)
	{
		ft_putnbr(a / 10);
		a = a % 10;
	}
	if (a >= 0)
		ft_putchar(a + 48);
}

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	x;
	int	tab[5] = {1, 2, 3, 4, 5};

	x = 0;
	ft_rev_int_tab(tab, 5);
	while (x < 5)
	{
		ft_putnbr(tab[x]);
		x++;
	}
	return (0);
}
