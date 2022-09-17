/* • Escribe una función ft_ultimate_div_mod que tenga el prototipo siguiente:
void ft_ultimate_div_mod(int *a, int *b);
• Esta función divide los int apuntados por a y b.
El resultado de la división se almacena en el int apuntado por a.
El resultado del resto de la división se almacena en el int apuntado por b */

#include<stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main (void)
{
	int n1;
	int n2;
	int *a;
	int	*b;

	n1 = 10;
	n2 = 5;
	a = &n1;
	b = &n2;
	ft_ultimate_div_mod(a, b);
	printf("%d %d\n", n1, n2);
}
