/* • Escribe una función que invierta un array de int (el primer elemento va el último,
etc).
• Los parámetros son un puntero a int y el número de int en el array.
• El prototipo de la función deberá ser el siguiente:
void ft_rev_int_tab(int *tab, int size); */
#include<stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	c;

	i = 0;
	c = size -1;
	while (i < c)
	{
		temp = tab[i];
		tab[i] = tab[c];
		tab[c] = temp;
		i++;
		c--;
	}
}

int main (void)
{
	int ind;	
	int	size;
	int tab[]={1, 2 ,3 ,4 ,5};
	size = 5;
	ind = 0;
	ft_rev_int_tab(tab, size);
	while (tab[ind] <= size)
	{	
		printf("%d", tab[ind]);
		ind++;
	}

}
