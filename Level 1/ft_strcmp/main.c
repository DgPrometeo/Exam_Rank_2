#include <stdio.h>
#include <string.h>

int	main (void)
{
	char *str1;
	char *str2;

	str1 = "hola";
	str2 = "holc";
	printf("el ejercicio: %d\n", ft_strcmp(str1, str2));
	printf("el original: %d\n", strcmp(str1, str2));
	return (0);
}
