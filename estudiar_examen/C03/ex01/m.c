#include<stdio.h>
#include<string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);


int main(void)
{
	
 	char *s1 = "hola";
	char *s2 = "holp";

	
	printf("%d\n", strncmp(s1, s2, 1));
	printf("%d", ft_strncmp(s1, s2, 1));
	return(0);
}