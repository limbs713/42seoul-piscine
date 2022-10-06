/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:21:09 by hyim              #+#    #+#             */
/*   Updated: 2022/10/06 22:50:39 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_size(char *arr)
{
	int		cnt;
	char	*cp;

	cnt = 0;
	cp = arr;
	while (*cp++)
	{
		cnt++;
	}
	return (cnt);
}

void	merge(char *dest, char *src, unsigned int size)
{
	char	*cp;

	cp = dest;
	while (*cp)
		cp++;
	while (size--)
	{
		if (!*src)
			break ;
		*cp = *src;
		cp++;
		src++;
	}
	*cp = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	src_size;
	int	dest_size;

	dest_size = check_size(dest);
	src_size = check_size(src);
	if (!size)
	{
		return (0);
	}
	else
	{
		merge (dest, src, size);
		if (dest_size + src_size <= size)
			return (dest_size + src_size);
		else
			return (size + src_size);
	}
}
