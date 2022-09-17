/* • Crea una función que ponga cada letra en mayúscula.
• El prototipo de la función deberá ser el siguiente:
char *ft_strupcase(char *str);
• Deberá devolver str.*/

#include<stdio.h>
char	*ft_upcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

int main(int argc, char *argv[])
	
{
	char *str;
	str = argv[1];	
	argc = 0;
	printf("%s\n", argv[1]);

	ft_upcase(str);

	printf("%s", ft_upcase(str));
}
