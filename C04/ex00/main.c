/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:07:27 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/20 08:56:12 by rofontai         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str);

int	main(void)
{
	char	phrase[] = "Hello World";

	ft_putstr(phrase);
	ft_putchar('\n');
	ft_putnbr(ft_strlen(phrase));
	return (0);
}
