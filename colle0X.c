/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle0X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderozin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 10:51:16 by dderozin          #+#    #+#             */
/*   Updated: 2016/08/06 12:05:11 by dderozin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_letter(int count_y, int count_x, int y, int x)
{
	if ((count_x == 0 || count_x == x) && count_y == 0)
		ft_putchar('A');
	else if (count_y == y && (count_x == 0 || count_x == x))
		ft_putchar('C');
	else if (count_y == 0 || count_y == y)
		ft_putchar('B');
	else if (count_x == 0 || count_x == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
void	colle(int x, int y)
{
	int		count_x;
	int		count_y;

	count_y = 0;

	while(count_y <= y)
	{
		count_x = 0;
		while(count_x <= x)
		{
			ft_put_letter(count_y, count_x, y, x);
			count_x++;
		}
		ft_putchar('\n');
		count_y++;
	}
}

int		main(void)
{
	colle(5, 5);
	return (0);
}
