/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 10:03:43 by kchen2            #+#    #+#             */
/*   Updated: 2018/11/10 20:31:17 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_midsquare(int x)
{
	int i;

	ft_putchar('|');
	i = 1;
	while (++i < x)
		ft_putchar(' ');
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	ft_lastline(int x)
{
	int i;

	ft_putchar('o');
	i = 1;
	while (++i < x)
		ft_putchar('-');
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

int		rush00(int x, int y)
{
	int i;
	int j;

	i = 0;
	if (x >= 1)
		ft_putchar('o');
	i = 1;
	while (++i < x)
		ft_putchar('-');
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
	j = 2;
	while (y > j)
	{
		ft_midsquare(x);
		j++;
	}
	if (y > 1)
	{
		ft_lastline(x);
	}
	return (0);
}
