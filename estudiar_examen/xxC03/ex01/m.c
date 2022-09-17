#include<stdio.h>
#include<string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);


int main(void)
{
	int result;
 	char *s1 = "holp";
	char *s2 = "hola";

	result = strncmp(s1, s2, 3);
	printf("%d\n", result);
	printf("%d", ft_strncmp(s1, s2, 3));
	return(0);


}
