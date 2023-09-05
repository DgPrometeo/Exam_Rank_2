#include <stdio.h>

int	main (void)
{
	const char *str = "13268!";
	int	base = 16;
	int solucion;

	solucion = ft_atoi_base(str, base);
	printf("El string es %s y la solucion es %d. \n", str, solucion);
	return (0);
}
