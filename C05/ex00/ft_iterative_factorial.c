/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:49:39 by jgamonal          #+#    #+#             */
/*   Updated: 2022/08/31 11:53:13 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int c;
    int d;

    c = 1;
    d = nb;
    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    if (nb == 1)
    {
        return (1);
    }
     while (c < d)
    {
        nb = nb * c;
        c++;
    }
    return (nb); 
}

int main()
{
    printf("%d", ft_iterative_factorial(1));
    return (0);
}