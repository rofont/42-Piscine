/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:22:47 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/16 09:16:52 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char b, char a)
{
	write(1, &c, 1);
	write(1, &b, 1);
	write(1, &a, 1);
	if (c < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	n[3];

	n[0] = 0;
	while (n[0] <= 7)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 8)
		{
			n[2] = n[1] + 1;
			while (n[2] <= 9)
			{
				ft_putchar(n[0] + '0', n[1] + '0', n[2] + '0');
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}