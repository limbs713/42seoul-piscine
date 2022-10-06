/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:10:21 by hyim              #+#    #+#             */
/*   Updated: 2022/10/01 15:42:33 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_nmd(long nb)
{
	int	count;

	count = 1;
	while (nb >= 10)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

void	make_arr(char arr[], long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		arr[i] = '0';
	}
	while (nb != 0)
	{
		arr[i++] = nb % 10 + '0';
		nb /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int		n;
	int		i;
	char	temp[10];
	long	m;

	m = nb;
	if (m < 0)
	{
		m *= -1;
		write (1, "-", 1);
	}
	n = count_nmd(m);
	i = n - 1;
	make_arr(temp, m);
	while (i >= 0)
	{
		write(1, &temp[i--], 1);
	}
}
