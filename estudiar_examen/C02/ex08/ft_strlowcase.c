/* • Crea una función que ponga cada letra en minúscula.
• El prototipo de la función deberá ser el siguiente:
char *ft_strlowcase(char *str);
• Deberá devolver str. */
#include<stdio.h>
char	*ft_str_is_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
				str[i] = str[i] + 32;
				i++;
		}
		else
			i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	char *str;
	char *str2;
	argc =0;
	str = argv[1];
	str2 = argv[2];
	
	ft_str_is_strlowcase(str);
	printf("%s\n", str);
	ft_str_is_strlowcase(str2);
	printf("%s", str2);
	return (0);
}
