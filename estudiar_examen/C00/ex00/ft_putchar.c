/* Escribe una función que muestre el carácter usado como parámetro.
• El prototipo de la función deberá ser el siguiente:
void ft_putchar(char c);
Para mostrar el carácter, tendras que utilizar la función write de la siguiente forma
write(1, &c, 1); */

#include <unistd.h>

void	ft_putchar(char c)
{	
	write (1, &c, 1);
}

int main (void)
{
	char i;

	i = 'p';
	ft_putchar(i);
	return (0);
}
