#include<stdio.h>
#include<string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[20] = "1234";
	char src[20] = "5678";
	
	
	//strncat(src, dest, 3);
	//printf("%s\n", dest);
	
	//printf("%s\n", strncat(dest, src, 20));
	printf("%s\n", ft_strncat(dest, src, 0));
	
	return(0);


}
