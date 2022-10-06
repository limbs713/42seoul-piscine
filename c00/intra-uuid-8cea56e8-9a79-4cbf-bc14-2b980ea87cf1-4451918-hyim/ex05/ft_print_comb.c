/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:03:30 by hyim              #+#    #+#             */
/*   Updated: 2022/10/01 15:07:21 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_05(char a, char b, char c)
{
	if (a < b)
	{
		if (b < c)
		{
			return (1);
		}
		else
			return (0);
	}
	else
		return (0);
}

void	print_05(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
		write (1, ", ", 2);
}

void	plus_05(char *a, char *b, char *c)
{
	if (*c == '9')
	{
		if (*b == '9')
		{
			(*a)++;
			*b = *a + 1;
			*c = *b;
		}
		else
		{
			(*b)++;
			*c = *b;
		}
	}
	else
		(*c)++;
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a != '7' || b != '9' || c != '9')
	{
		if (check_05 (a, b, c))
		{
			print_05 (a, b, c);
		}
		plus_05 (&a, &b, &c);
	}
}
