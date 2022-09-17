/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:00:07 by jgamonal          #+#    #+#             */
/*   Updated: 2022/08/31 12:28:52 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int c;
    int d;
    
    d = nb;
    c = power;
    //power = nb;
    if (nb == 0)
        return (1);
    if (power < 0)
        return (0);
    while (c > 1)
    {
        nb = nb * d;
        c--;
    }
    return (nb); 
}

int main()
{
    printf("%d", ft_iterative_power(-5, 5));
    return (0);
}