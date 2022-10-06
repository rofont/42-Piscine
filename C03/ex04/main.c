/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:51:34 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/26 09:16:03 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char    *ft_strstr(char *str, char *to_find);

int main()
{
    char *str = "hello world";
    char *tofi = "lo";
    
    printf("%s\n", ft_strstr(str, tofi));

    return (0);
}
