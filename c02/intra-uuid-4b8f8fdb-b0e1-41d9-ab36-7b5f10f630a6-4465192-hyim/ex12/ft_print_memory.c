/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:58:33 by hyim              #+#    #+#             */
/*   Updated: 2022/10/06 19:47:07 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	int *data = (int*)&addr;
	write (1, data, sizeof data);
	return (addr);
}

int main()
{
	char	*c;
	
	c = "abcd";
	ft_print_memory(c , 6);
	return 0;
}
