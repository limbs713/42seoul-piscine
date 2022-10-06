/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:50:08 by hyim              #+#    #+#             */
/*   Updated: 2022/10/01 14:16:11 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_putchar(char c);

void	draw_func(int i, int j, int col, int row)
{
	if (i == 1 || i == row)
	{
		if (j == 1 || j == col)
		{
			ft_putchar('o');
		}
		else
			ft_putchar('-');
	}
	else
	{
		if (j == 1 || j == col)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int col, int row)
{
	int	i;
	int	j;

	i = 1;
	while (i <= row)
	{
		j = 1;
		while (j <= col)
		{
			draw_func (i, j, col, row);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
