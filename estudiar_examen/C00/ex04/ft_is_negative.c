/* Escribe una función que muestre “N” o “P” en función del signo del entero que se
haya usado como parámetro. Si n es negativo muestra “N”. Si n es positivo o nulo
muestra “P”.
• El prototipo de la función deberá ser el siguiente:
void ft_is_negative(int n);*/

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}
int	main(void)
{
	ft_is_negative(4);
	ft_is_negative(-2);
}
