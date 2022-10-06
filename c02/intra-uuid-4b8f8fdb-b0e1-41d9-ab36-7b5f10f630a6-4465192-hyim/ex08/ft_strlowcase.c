/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:28:20 by hyim              #+#    #+#             */
/*   Updated: 2022/10/02 13:31:45 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str - 'A' + 'a';
		str++;
	}
	return (str);
}
