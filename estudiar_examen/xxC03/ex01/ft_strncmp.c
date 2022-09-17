/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:06:04 by jgamonal          #+#    #+#             */
/*   Updated: 2022/08/27 08:11:20 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	dif;
	unsigned int	i;

	i = 0;
	while (s1[i] <= s1[n - 1])
	{
		while (s1[i] == s2[i])
		{
			if (s1[i] == s1[n - 1])
			{
				return (0);
			}
		i++;
		}
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			return (dif);
		}
	}
	return (0);
}
