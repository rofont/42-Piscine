/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:36:33 by rofontai          #+#    #+#             */
/*   Updated: 2022/09/30 11:01:46 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
    char    *new_str;
    char    *str = "Hello World";
   
    new_str = ft_strdup(str);
    printf("%s\n", new_str);
    free(str);
}