/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minyounk <minyounk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:33:14 by minyounk          #+#    #+#             */
/*   Updated: 2022/10/01 15:16:36 by hyim             ###   ########.fr       */
/*   Updated: 2022/10/01 15:07:17 by minyounk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	draw_func(int i, int j, int col, int row)
{
	if (i == 1 || i == row)
	{
		if (j == 1 || j == col)
		{
			if (j != 1)
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('A');
			}
		}
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 1 || j == col)
			ft_putchar('B');
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
