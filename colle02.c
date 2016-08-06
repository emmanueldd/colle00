/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agougaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 10:54:24 by agougaut          #+#    #+#             */
/*   Updated: 2016/08/06 11:38:17 by agougaut         ###   ########.fr       */
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
	int tmpx;
	int tmpy;
	
	tmpx = 0;
	tmpy = 0;

	while(tmpy <= y)
	{
		tmpx = 0;
		while(tmpx <= x)
		{
			if(((tmpx == 0) && (tmpy == 0)) || ((tmpx == x) && (tmpy == 0)))
			{
				ft_putchar('A');
			}else if(((tmpx == 0) && (tmpy == y)) || ((tmpx == x) && (tmpy == y)))
			{
				ft_putchar('C');
			}else if(tmpy == 0 || tmpy == y )
			{
				ft_putchar('B');
			}else if(tmpy > 0  && tmpy < y)
			{
				if(tmpx == 0 || tmpx == x)
				{
					ft_putchar('B');
				}else
				{
					ft_putchar(' ');
				}	
			}
			tmpx++;
		}
		ft_putchar('\n');
		tmpy++;
	}
}

int main(void)
{
	colle(15, 15);
	return (0);
}
