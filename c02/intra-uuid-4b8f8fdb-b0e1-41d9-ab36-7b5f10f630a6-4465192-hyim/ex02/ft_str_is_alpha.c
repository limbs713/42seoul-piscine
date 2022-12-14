/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:00:46 by hyim              #+#    #+#             */
/*   Updated: 2022/10/02 13:16:03 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if(!*str)
		return (1);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
			return (1);
		str++;
	}
	return (0);
}
