/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 08:52:37 by probert           #+#    #+#             */
/*   Updated: 2017/09/11 17:37:28 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_set(int c, int d, int u)
{
	int max;

	while (u <= 9)
	{
		ft_putchar('0' + c);
		ft_putchar('0' + d);
		ft_putchar('0' + u);
		max = (c * 100) + (d * 10) + u;
		if (max < 789)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		u++;
	}
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = 0;
	d = 0;
	u = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			print_set(c, d, u);
			d++;
		}
		c++;
	}
}
