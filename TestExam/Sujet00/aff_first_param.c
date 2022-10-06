/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:19:04 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/05 10:52:33 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
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
    if (argc < 2)
        write (1, "\n", 1);
    else
        ft_pustr(argv[1]);
        write (1, "\n", 1);
    return (0);
}