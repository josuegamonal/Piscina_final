/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_recursive_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:04:27 by jgamonal          #+#    #+#             */
/*   Updated: 2022/08/31 11:13:08 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    if (nb == 1)
    {
        return (1);
    }
    else
    {
        return (nb * ft_recursive_factorial(nb - 1));
    }
}

int main()
{
    printf("%d", ft_recursive_factorial(5));
    return (0);
}