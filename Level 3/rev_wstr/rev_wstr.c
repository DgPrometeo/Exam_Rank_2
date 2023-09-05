#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char *str;
	int	end;
	int	i;
	int start;
	int flag;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while  (str[i] != '\0')
			i++;
		while (i >= 0)
		{
			while(str[i] == '\0' || str[i] == 32 || str[i] == 9)
				i--;
			end = i;
			while (str[i] && str[i] != 32 && str[i] != 9)
				i--;
			start = i + 1;
			flag = start;
			while(start <= end)
			{
				ft_putchar(str[start]);
				start++;
			}
			if (flag != 0)
				ft_putchar(32);
		}
	}
	ft_putchar('\n');
	return (0);
}
