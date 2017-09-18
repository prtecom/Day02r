/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:54:16 by probert           #+#    #+#             */
/*   Updated: 2017/09/18 19:11:40 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(10);
	ft_putchar('\n');
	ft_putnbr(-0);
	ft_putchar('\n');
	ft_putnbr(-10);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-250);
	ft_putchar('\n');
	ft_putnbr(3500);
	ft_putchar('\n');
	ft_putnbr(50010);
	ft_putchar('\n');
	ft_putnbr(645210);
	ft_putchar('\n');
	ft_putnbr(-50010);
	ft_putchar('\n');
	ft_putnbr(-645210);
	ft_putchar('\n');
	ft_putnbr(-1065626710);
	ft_putchar('\n');
	ft_putnbr(30352834);
	ft_putchar('\n');
	ft_putnbr(1030352834);
	ft_putchar('\n');

	return (0);
}
