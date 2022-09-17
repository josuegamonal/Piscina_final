/* • Crea una función que devuelva 1 si el string usado como parámetro contiene
 * únicamente caracteres alfabéticos en minúsculas y devuelva 0 si contiene otro tipo de
caracteres.
• El prototipo de la función deberá ser el siguiente:
int ft_str_is_lowercase(char *str);
• Tendrá que devolver 1 si str es un string vacío.*/
#include<stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 64 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}

int main(int argc, char *argv[])
{
	char *str;
	int i;

	argc = 1	
	str = argv[1];

	printf("argc %d\n string", argc, argv[1]);

	ft_str_is_uppercase(str);

	printf("%d", ft_str_is_uppercase(str));
}
