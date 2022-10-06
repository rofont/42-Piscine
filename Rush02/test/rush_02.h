/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:34:58 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/01 11:44:56 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef S_dict S_dict;
struct S_dict
{
    int nbr;
    char *value;
};

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif


