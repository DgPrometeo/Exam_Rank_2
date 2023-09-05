static int	ft_hextodec(char c)
{
	if (c >= 48 && c <= 57)
		return (c - 48);
	else if (c >= 'a' && c <= 'f')
		return (c - 97 + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 65 + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	n;

	result = 0;
	n = 0;
	sign = 1;
	while (str[n] <= 32)
		n++;
	if (str[n] == 45 || str[n] == 43)
	{
		if (str[n] == 45)
			sign = sign * -1;
		n++;
	}
	while (((str[n] >= 48) && (str[n] <= 57)) || ((str[n] >= 65) && (str[n] <= 70)) || ((str[n] >= 97) && (str[n] <= 102)))
	{
		result = (result * str_base) + ft_hextodec(str[n]);
		n++;
	}
	return (result * sign);
}


/*En esta función tiene que convertir un argumento string en base 16 a uno de base 10. 
 * reconoceria: 0123456789abcdef y 0123456789ABCDEF
 * devolviéndolo en entero: 0123456789 
 * los símbolos negativos - los interpretaría si es el primer caracter del string.
 * -------
 * revisamos que no haya saltos de linea ni espacios
 * revisamos que el simbolo negativo o positivos para cambiar el valor.
 * tenemos que hacer que las letras A-B-C-D-E-F pasen a ser 10-11-12-13-14-15
 * Pero hay que tener en cuenta que si es en minuscula o si es en mayuscula. (ASCII)
 * Si es un número del 0 al 9 se pondrá directamente en enteros sumandole '0' o 48
 * Si es una letra de la a-f se le restará su posición ascii y se le sumará 10 para asignarle del 10-15 ya que la función devolverá un entero. 
 * Si es una letra A-F se resta su posición asci y se le suma 10 igualmente.
 *
 * */
/*
#include <stdio.h>

int main (void)
{
	const char *str = "13268!";
	int base = 16;
	int solucion;

	solucion = ft_atoi_base(str, base);
	printf("El string es %s y la solucion es %d. \n", str, solucion);
	return (0);
 }*/
