#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	ft_strlen (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i - 1);
}

int	main (int argc, char **argv)
{
	int size;
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		size = ft_strlen(str);
		while (size >= 0)
		{
			ft_putchar(str[size]);
			size--;
		}
	}
	ft_putchar('\n');
	return (0);
}
