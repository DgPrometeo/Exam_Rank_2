#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
}

int	ft_checker(char x, char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] == x)
				return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int	len;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_checker(s1[i], s1, i) == 1)
			ft_putchar(s1[i]);
		i++;
	}
	len = i;
	i = 0;
	while (s2[i] != '\0')
	{
		 if (ft_checker(s2[i], s2, i) == 1)
		 {
			 if(ft_checker(s2[i], s1, len) == 1)
				 ft_putchar(s2[i]);
		 }
		 i++;
	}

}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
