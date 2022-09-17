/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:23:41 by jgamonal          #+#    #+#             */
/*   Updated: 2022/08/23 16:43:35 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] +32;
			i++;
		}
		else
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_lowcase(str);
	i = 1;
	if (str[i - 1] >= 97 && str[i - 1] <= 122)
	{
		str[i - 1] = str[i - 1] -32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
			&& (!(str[i - 1] >= 65 && str[i - 1] <= 90))
			&& (!(str[i - 1] >= 48 && str[i - 1] <= 57))
			&& (!(str[i - 1] >= 97 && str[i - 1] <= 122)))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
