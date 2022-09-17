#include<stdio.h>
#include<string.h>
char *ft_strcat(char *dest, char *src);

int	main()
{

	char dest[20] = "texto2";
	char src[20] = "texto1";
	strcat(src, dest);
	printf("%s\n", dest);
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return(0);

}
