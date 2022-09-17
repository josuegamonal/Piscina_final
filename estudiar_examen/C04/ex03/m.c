#include<stdio.h>
int ft_atoi(char *str);
int main(void)
{
    char *str;
    str = "     ++---4343jsd";
    printf("%d", ft_atoi(str));
    return (0);
}