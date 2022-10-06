/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerchoi <yerchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:50:08 by hyim              #+#    #+#             */
/*   Updated: 2022/10/01 14:58:14 by hyim             ###   ########.fr       */
/*   Created: 2022/10/01 15:12:40 by yerchoi           #+#    #+#             */
/*   Updated: 2022/10/01 15:13:12 by yerchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	draw_func(int i, int j, int col, int row)
{
	if (i == 1 || i == row)
	{
		if (j == 1 || j == col)
		{
			if (i == j)
				ft_putchar('/');
			else
				ft_putchar('\\');
		}
		else
			ft_putchar('*');
	}
	else
	{
		if (j == 1 || j == col)
			ft_putchar('*');
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
