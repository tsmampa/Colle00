/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:15:49 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/15 12:16:57 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(c)
{	
	write(1, &c, 1);
}

void rush(int h, int v)
{
	int hor;
	int ver;
	hor = 1;
	ver = 1;
	char topcorner;
	topcorner = 'A';
	char bottomcorner;
	bottomcorner = 'C';
	char sidesv;
	char space;
	char sidesh;
	sidesv = 'B';
	sidesh = 'B';
	space = ' ';

	while(ver <= v)
	{
		while(hor <=  h)
		{
			if(((hor==1)|| (hor == h))&&((ver == 1)))
			{
				ft_putchar(topcorner);
			}
			else if(((hor==1)|| (hor == h))&&(v == ver))
			{
				ft_putchar(bottomcorner);
			}
			else if (((hor != 1)||(hor != h))&&( (ver == 1)||(ver == v)))
			{
				ft_putchar(sidesv);
			}
			else if (((hor == 1)||(hor == h))&&((ver != 1)||(ver != v)))
			{
				ft_putchar(sidesh);
			}
			else 
			{
				ft_putchar(space);
			}
			hor++;

		}
		write(1, "\n", 1);
		hor = 1;
		ver = ver +1;
	}


}



int main()
{
	int v;
	int h;
	v = 5;
	h = 3;
	rush(h , v);
	return(0);

}
