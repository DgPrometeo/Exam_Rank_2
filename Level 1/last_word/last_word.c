#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0 && (str[i] == 32 || str[i] == 9 || str[i] == '\0'))
		i--;
	while (i >= 0 && str[i] != 32 && str[i] != 9)
		i--;
	i++;
	while (str[i] != '\0' && str[i] != 32 && str[i] != 9)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
