/*• Escribe una función que muestre, en una sola línea y en orden creciente, todos los
dígitos.
• El prototipo de la función deberá ser el siguiente:
void ft_print_numbers(void);*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write (1, &c, 1);
		c++;
	}
}

int main(void)
{
	ft_print_numbers();
	return (0);
}
