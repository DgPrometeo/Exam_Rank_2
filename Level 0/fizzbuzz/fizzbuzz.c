/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:16:54 by danielga          #+#    #+#             */
/*   Updated: 2023/05/11 11:44:39 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main()
{
	char	c;

	c = 1;
	while (c < 101)
	{
		if ( c % 3 == 0 && c % 5 != 0)
			write(1, "fizz", 4);
		else if (c % 5 == 0 && c % 3 != 0)
			write(1, "buzz", 4);
		else if (c % 5 == 0 && c % 3 == 0)
			write(1, "fizzbuzz", 8);
		else if (c < 10)
			ft_putchar(c + 48);
		else if (c > 9 && c < 100)
		{
			ft_putchar((c / 10) + 48);
			ft_putchar((c % 10) + 48);
		}
		else if (c == 100)
		{
			ft_putchar((c / 100) + 48);
			ft_putchar((c % 10) + 48);
			ft_putchar((c % 100) + 48);
		}
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
