/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:15:08 by hyim              #+#    #+#             */
/*   Updated: 2022/10/01 15:09:18 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_06(char a, char b, char c, char d)
{	
	if ((a - '0') * 10 + b - '0' < (c - '0') * 10 + d - '0')
	{
		return (1);
	}
	else
		return (0);
}

void	print_06(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write (1, ", ", 2);
}

void	plus_06(char *a, char *b, char *c, char *d)
{
	if (*d - '0' == 9)
	{
		if (*c - '0' == 9)
		{
			if (*b - '0' == 9)
			{
				(*a)++;
				*b = '0';
			}
			else
			{
				(*b)++;
			}
			*c = *a;
			*d = *b;
		}
		else
		{
			(*c)++;
			*d = '0';
		}
	}
	else
		(*d)++;
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a != '9' || b != '9' || c != '9' || d != '9')
	{
		if (check_06 (a, b, c, d))
			print_06 (a, b, c, d);
		plus_06 (&a, &b, &c, &d);
	}
}
