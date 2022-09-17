/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 08:27:33 by jgamonal          #+#    #+#             */
/*   Updated: 2022/08/28 17:29:42 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (to_find[c] == str[i + c])
		{
			if (to_find [c + 1] == '\0')
			{
				return (&str[i]);
			}
			c++;
		}
		i++;
	}
	return (str);
}
