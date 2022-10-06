/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:07:39 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/28 15:45:12 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}


void	ft_putchar(char c)
{
	write (1, &c, 1);
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
	return (ft_putchar('\n'));
}

void	ft_swapchar(char *str, char *str1)
{
	char temp;

	temp = *str;
	*str = *str1;
	*str1 = temp;
}
	



int	main(int argc, char **argv)
{
	int i;
	int y;

	i = 1;
	y = 1;
	while 	
	i = 1;
	while (i < argc - 1)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}

