/*La función strcpy copia la cadena a la cual señala s2 
 (incluyendo el carácter nulo de terminación) al arreglo al cual señala s1.
 Si la copia se lleva a cabo entre objetos que se superponen, el comportamiento queda indefinido. 
 La función strcpy devuelve el valor de s1.

strcpy(destino, fuente);

 * Reproduce el comportamiento de la función strcpy (man strcpy)
• El prototipo de la función deberá ser el siguiente:
char *ft_strcpy(char *dest, char *src); */
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char src[] = "hola mundo";
	char dest[] = "no se que mundo";
	printf("%s %s", src, dest);

	ft_strcpy(dest, src);

	printf("%s %s", src, dest); 
}
