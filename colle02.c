/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agougaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 10:54:24 by agougaut          #+#    #+#             */
/*   Updated: 2016/08/06 14:21:55 by agougaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	colle(int x, int y)
{
	int tx;
	int ty;

	while (ty <= y)
	{
		tx = 0;
		while (tx <= x)
		{
			if (((tx == 0) && (ty == 0)) || ((tx == x) && (ty == 0)))
				ft_putchar('A');
			else if (((tx == 0) && (ty == y)) || ((tx == x) && (ty == y)))
				ft_putchar('C');
			else if (ty == 0 || ty == y)
				ft_putchar('B');
			else if (ty > 0  && ty < y)
				if (tx == 0 || tx == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
			tx++;
		}
		ft_putchar('\n');
		ty++;
	}
}

int		main(void)
{
	colle(15, 15);
	return (0);
}

