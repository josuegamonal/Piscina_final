#include<stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "12345678";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
}