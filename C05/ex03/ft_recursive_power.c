/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:29:10 by jgamonal          #+#    #+#             */
/*   Updated: 2022/08/31 12:32:50 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
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
        return (nb * (ft_recursive_power(nb, power - 1)));
       // nb = nb * d;
        c--;

    }
    return (nb);
}

int main()
{
    printf("%d", ft_recursive_power(-5, 5));
    return (0);
}