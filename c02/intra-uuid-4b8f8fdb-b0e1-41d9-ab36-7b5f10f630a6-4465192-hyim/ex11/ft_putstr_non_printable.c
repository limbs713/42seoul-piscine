/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:51:40 by hyim              #+#    #+#             */
/*   Updated: 2022/10/06 18:58:05 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *str)
{
	int		div;
	char	mod;

	div = (*str / 16);
	write (1, "\\", 1);
	*str %= 16;
	write (1, &div, 1);
	if (*str > 9)
		*str = *str - '0' + 'a';
	write (1, str, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str <= 31)
		{
			print (++str);
		}
		else
			write (1, str, 1);
		str++;
	}
}
