/* • Crea una función que devuelva 1 si el string usado como parámetro contiene únicamente caracteres alfabéticos y devuelva 0 si contiene otro tipo de caracteres.
• El prototipo de la función deberá ser el siguiente:
int ft_str_is_alpha(char *str);
• Tendrá que devolver 1 si str es un string vacío.*/
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
int main(void)
{
	char str[] = "akdjs";

	printf("%s", str);

	ft_str_is_alpha(str);

	printf("%d", ft_str_is_alpha(str));
}
