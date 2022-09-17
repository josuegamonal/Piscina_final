/* Escribe una función ft_div_mod que tenga el prototipo siguiente:
void ft_div_mod(int a, int b, int *div, int *mod);
• Esta función divide los dos parámetros a y b y almacena el resultado en el int
apuntado por div.
También almacena el resto de la división de a y b en el int apuntado por mod.*/
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b; 
		*mod = a % b;
	}
}

int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	
	a = 10;
	b = 5;
	div = &a;
	mod = &b;
	ft_div_mod(20, 2, div, mod);
	printf("div =%d, mod=%d", *div, *mod);
}
