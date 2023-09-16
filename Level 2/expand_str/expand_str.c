#include<unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	int	space;

	j = 0;
	if (argc == 2)
	{
		while (argv[1][j] == 32 || argv[1][j] == '\t')
			j++;
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] == 32 || argv[1][j] == '\t')
				space = 1;
			if (!(argv[1][j] == 32 || argv[1][j] == '\t'))
			{
				if (space == 1)
					write(1, "   ", 3);
				space = 0;
				write(1, &argv[1][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
