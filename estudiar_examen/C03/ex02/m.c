#include<stdio.h>
#include<string.h>
char *ft_strcat(char *dest, char *src);

int	main()
{

	char dest[30] = "texto2";
	char src[15] = "textwweeweo1";

	//printf("%s\n", strcat(dest, src));
	
	printf("%s\n", ft_strcat(dest, src));
	return(0);

}
