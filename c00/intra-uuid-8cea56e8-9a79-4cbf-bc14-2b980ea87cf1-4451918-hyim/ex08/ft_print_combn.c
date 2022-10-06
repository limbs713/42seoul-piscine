/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:17:12 by hyim              #+#    #+#             */
/*   Updated: 2022/09/30 19:17:25 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int n, char arr[])
{
	int	i;
	int	check;
	int	temp;

	i = 0;
	check = 0;
	while (i < n)
	{
		write (1, &arr[i], 1);
		temp = 9 - n + i + 1;
		if ((int)arr[i] - '0' == temp)
			check++;
		i++;
	}
	if (check != n)
		write (1, ", ", 2);
}

void	bfs(int n, char st, int num, char arr[])
{
	if (n == num)
	{
		print (n, arr);
		return ;
	}
	while (st <= '9')
	{
		arr[num] = st;
		bfs (n, ++st, num + 1, arr);
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	bfs (n, '0', 0, arr);
}
