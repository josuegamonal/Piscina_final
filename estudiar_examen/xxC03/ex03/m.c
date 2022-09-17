#include<stdio.h>
#include<string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[20] = "pepepe";
	char src[20] = "holali";
	
	
	//strncat(src, dest, 3);
	//printf("%s\n", dest);
	ft_strncat(dest, src, 3);
	printf("%s\n", dest);
	return(0);


}
