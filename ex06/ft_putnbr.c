/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:56:00 by probert           #+#    #+#             */
/*   Updated: 2017/09/18 20:15:24 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int				count;
	int				b[10];
	unsigned int	max;

	count = 0;
	max = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		max = nb * -1;
	}
	if (max == 0)
		ft_putchar(max + '0');
	while (max > 0)
	{
		b[count] = max % 10;
		count++;
		max = max / 10;
	}
	while (count > 0)
	{
		count--;
		ft_putchar(b[count] + '0');
	}
}
