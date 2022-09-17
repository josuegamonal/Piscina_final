/* • Escribe una función que muestre el alfabeto en minúsculas en una sola línea, en
orden creciente, empezando en la letra “a”.
• El prototipo de la función deberá ser el siguiente:
void ft_print_alphabet(void);*/

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		c++;
	}
}

int main (void)
{
	ft_print_alphabet();
}
