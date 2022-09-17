/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 08:16:24 by jgamonal          #+#    #+#             */
/*   Updated: 2022/08/29 08:16:28 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
    int c; 
	
    c = 1;
	while (c < argc)
	{
		i = 0;	
		while (argv[c][i] != '\0' )
	    {
		write(1, &argv[c][i], 1);
		i++;
	    }
	write(1, "\n", 1);
    c++;
	}
	return (0);
}
