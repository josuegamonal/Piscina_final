/* **• Reproduce el comportamiento de la función strncpy (man strncpy)
• El prototipo de la función deberá ser el siguiente:
char *ft_strncpy(char *dest, char *src, unsigned int n);*/
                                                                      
#include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
	char src[] = "hola mundo";
	char dest[] = "no se que mundo";
	printf("%s\n %s\n", src, dest);

	ft_strncpy(dest, src, 4);

	printf("%s\n %s\n", src, dest);
}

