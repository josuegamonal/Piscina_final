
#include<stdio.h>
#include<string.h>
int	ft_strcmp(char *s1, char *s2);


int main(void)
{
 	int result;
	char frase1[] = "hala";
 	char frase2[] = "hola";
	char *s1;
	char *s2;
	s1 = frase1;
	s2 = frase2;
	result = strcmp(s1, s2);
	printf("%d\n", result);
	printf("%d", ft_strcmp(s1, s2));
	return(0);

}
