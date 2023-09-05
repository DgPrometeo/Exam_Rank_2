#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	ft_strlen(char *str)
{
	int len;

	while (str)
		len++;
	return (len);

}*/

int	main (int argc, char **argv)
{
	int	i;
	int	size;
	char *str;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		str = argv[1];
//		size = ft_strlen(str) - 1;
		while ((str[i] > 8 && str[i] < 13) || str[i] == 32)
			i++;
		while (str[i] != '\0')
		{
			if (str[i] == 32 && (str[i + 1] != 32 && str[i + 1] != '\0'))
				ft_putchar(str[i]);
			if (str[i] != 32 && str[i] != 9)
				ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
