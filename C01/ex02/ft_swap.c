/* • Escribe una función que intercambie el contenido de dos enteros cuyas direcciones
se utilicen como parámetro.
• El prototipo de la función deberá ser el siguiente:
void ft_swap(int *a, int *b);*/

#include<stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int n1;
	int	n2;
	int *a;
	int *b;

	n1 = 5;
	n2 = 10;
	a = &n1;
	b = &n2;
	printf("n1= %d, n2= %d\n", n1, n2);
	ft_swap(a, b);
	printf("n1= %d, n2= %d", n1, n2);
}
