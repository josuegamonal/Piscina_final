/*Escribe una función que cuente el número de caracteres de un string y que devuelva
el número encontrado.
• El prototipo de la función deberá ser el siguiente:
int ft_strlen(char *str); */
#include<stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	str[] = "12345678";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
}
