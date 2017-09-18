/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:56:00 by probert           #+#    #+#             */
/*   Updated: 2017/09/18 11:39:00 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_set(int a)
{
	if (a < 0 || a > 99)
		return ;
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 1;
	print_set(i);
	ft_putchar(' ');
	print_set(j);
	while (i <= 98)
	{
		while (j <= 99)
		{
			ft_putchar(',');
			ft_putchar(' ');
			print_set(i);
			ft_putchar(' ');
			print_set(j);
			j++;
		}
		i++;
		j = i + 1;
	}
}
