/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:06:23 by hyim              #+#    #+#             */
/*   Updated: 2022/10/06 22:45:36 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	find(char *str, char *to_find)
{
	char	*temp_s;
	char	*temp_t;

	temp_s = str;
	temp_t = to_find;
	while (*temp_t)
	{
		if (*temp_s != *temp_t)
			return (0);
		temp_s++;
		temp_t++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (find(str, to_find))
				return (str);
		}
		str++;
	}
	return (0);
}
