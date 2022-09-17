/* • Escribe una función que reciba como parámetro un puntero a un int y dé al int
el valor 42.
• El prototipo de la función deberá ser el siguiente:
void ft_ft(int *nbr);*/
#include<stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int a;
	int *nbr;

	a = 5;
	nbr = &a;
	printf("dato antes de funcion: %d\n", *nbr);
	ft_ft(nbr);
	printf("dato despues de funcion: %d", *nbr);
}
