/*Escribe una función que muestre todas las combinaciones posibles de dos números
entre 0 y 99, en orden creciente.
• El resultado es algo parecido a esto:
$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
• El prototipo de la función deberá ser el siguiente:
void ft_print_comb2(void);*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)

{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
		++b;
		}
	++a;
	}
}
int	main(void)
{
	ft_print_comb2();
}
