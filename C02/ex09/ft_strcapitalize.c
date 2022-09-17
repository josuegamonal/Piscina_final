/* • Creaa una función que ponga en mayúscula la primera letra de cada palabra y el
resto de la palabra en minúsculas.
• Una palabra es una secuencia (string) de caracteres alfanuméricos.
• El prototipo de la función deberá ser el siguiente:
char *ft_strcapitalize(char *str);
• Deberá devolver str. */

#include<stdio.h>
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

int main(int argc, char *argv[])
{
	
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	
	ft_strcapitalize(str);

	printf("%s", str);
	return (0);
}
