/* Crea una función que devuelva 1 si el string usado como parámetro
 contiene únicamente caracteres imprimibles y devuelva 0 
 si contiene otro tipo de caracteres.
• El prototipo de la función deberá ser el siguiente:
int ft_str_is_printable(char *str);
• Tendrá que devolver 1 si str es un string vacío.*/
#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str [i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

int main(int argc, char *argv[])
{
	char *str;
	argc = 0;	
	str = argv[argc];

	printf("%s\n %s\n", argv[0], argv[1]);

	ft_str_is_printable(str);

	printf("%d", ft_str_is_printable(str));
}
