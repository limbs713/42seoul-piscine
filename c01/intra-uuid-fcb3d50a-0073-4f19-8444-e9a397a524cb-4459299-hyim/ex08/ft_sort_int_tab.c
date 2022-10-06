/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:46:44 by hyim              #+#    #+#             */
/*   Updated: 2022/10/02 12:34:48 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	find(int i, int j, int *tab, int size)
{
	int	temp;

	while (j < size)
	{
		if (*(tab + i) > *(tab + j))
		{
			temp = *(tab + i);
			*(tab + i) = *(tab + j);
			*(tab + j) = temp;
		}
		j++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		find (i, j, tab, size);
		i++;
	}
}
