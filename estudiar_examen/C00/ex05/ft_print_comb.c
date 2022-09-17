/* • Escribe una función que muestre, en orden creciente, todas las combinaciones posibles de tres 
 * dígitos distintos en orden creciente -sí, la repetición es voluntaria.
• El resultado es algo parecido a esto:
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
• 987 no está porque 789 ya existe
• 999 no está porque este número no contiene exclusivamente dígitos distintos
• El prototipo de la función deberá ser el siguiente:
void ft_print_comb(void);*/

#include <unistd.h>

void	ft_printn(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)

{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_printn(a, b, c);
				++c;
			}
		++b;
		}
	++a;
	}
}
int main(void)
{
	ft_print_comb();
}
