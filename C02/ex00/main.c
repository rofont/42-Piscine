/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:55:31 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/21 08:01:28 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
   	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
   	}
}

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	phrase[] = "Hello World";
	char	sortie[] = "Pappay";
	ft_putstr(phrase);
	ft_putchar('\n');
	ft_putstr(ft_strcpy(phrase, sortie));
	ft_putchar('\n');
	return (0);
}
