#include<stdio.h>
#include<string.h>
char	*ft_strstr(char *str, char *to_find);
int main()
{
   char to_find[] = "asm";
    char str[20] = "this ist asm";


    //printf("%s\n", strstr(str, to_find));
    //ft_strstr(str, to_find);
    printf("%s\n", ft_strstr(str, to_find));
    return(0);
}