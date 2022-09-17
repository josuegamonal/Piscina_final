/* Escribe una función que muestre el alfabeto en minúsculas en una sola línea, en
orden decreciente, empezando en la letra “z”.
• El prototipo de la función deberá ser el siguiente:
void ft_print_reverse_alphabet(void);*/

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write (1, &c, 1);
		c--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
