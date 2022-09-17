/* • Escribe una función que muestre uno a uno en la pantalla los caracteres de un
string.
• La dirección del primer carácter del string está incluida en el puntero utilizado como
parámetro para a la función.
• El prototipo de la función deberá ser el siguiente:
void ft_putstr(char *str);*/
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}	
}

int  main(void)
{
	char	str[]="hola y adios";
	
	
	ft_putstr(str);

}

