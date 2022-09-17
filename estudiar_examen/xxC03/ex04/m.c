#include<stdio.h>
#include<string.h>
char	*ft_strstr(char *str, char *to_find);
int main()
{
    char to_find[] = "ist";
    char str[20] = "this ist asm";
    char *ret;

    ret = strstr(str, to_find);
    printf("%s\n", ret);
    ft_strstr(str, to_find);
    printf("%s\n", ft_strstr(str, to_find));
    return(0);
}