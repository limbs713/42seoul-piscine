/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:37:08 by hyim              #+#    #+#             */
/*   Updated: 2022/10/02 13:46:04 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	unsigned int	cnt;

	i = 0;
	cnt = 0;
	while (*src || i++ < size - 1)
	{
		*(dest++) = *(src++);
		cnt++;
	}
	*dest = '\0';
	return (cnt);
}
