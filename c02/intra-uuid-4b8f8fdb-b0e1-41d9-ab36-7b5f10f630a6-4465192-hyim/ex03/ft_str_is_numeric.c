/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:06:12 by hyim              #+#    #+#             */
/*   Updated: 2022/10/02 13:15:54 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			continue;
		else
			return (0);
		str++;
	}
	return (1);
}
