/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:57:25 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/05 13:48:32 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_pustr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc <= 1)
        ft_putchar('\n');
    else
        ft_pustr(argv[argc -1]);
        ft_putchar('\n');
    return (0);
}
