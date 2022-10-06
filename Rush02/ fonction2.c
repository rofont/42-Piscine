/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:32:31 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/02 12:31:49 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	nb;

	i = 0;
	n = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * n);
}

unsigned int validation_argc (unsigned int argc, char **argv)
{
    if (argc > 3 || argc < 2)
        return (0);
    if (argc == 2)
    {
        if (ft_atoi(argv[2]) < 0)
            return ("Error\n");
        return (ft_atoi(argv[2]));
    }
    if (argv == 3)
    {
        if (ft_atoi(argv[3]) < 0)
            return ("Error\n");
        return (ft_atoi(argv[3]));
    }
}