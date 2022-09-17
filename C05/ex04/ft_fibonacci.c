/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:34:06 by jgamonal          #+#    #+#             */
/*   Updated: 2022/08/31 15:45:34 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{    
    if (index < 0)
        return (-1);
    if (index < 2)
        return (index);
    return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int main()
{
    printf("%d\n", ft_fibonacci(3));
    return (0);
}