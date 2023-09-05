#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char *str;
	int	size;

	i = 0;
	size = ft_strlen(src);
	str = (char *)malloc(sizeof (char) * (size + 1));
	if(!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
