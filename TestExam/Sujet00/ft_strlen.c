/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:41:29 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/06 09:43:01 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}