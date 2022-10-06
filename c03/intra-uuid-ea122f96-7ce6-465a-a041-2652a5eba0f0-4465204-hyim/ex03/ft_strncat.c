/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyim <hyim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:02:55 by hyim              #+#    #+#             */
/*   Updated: 2022/10/06 21:51:05 by hyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*cp;

	cp = dest;
	while (*cp)
		cp++;
	while (nb--)
	{
		if (!*src)
			break ;
		*(cp) = *(src);
		cp++;
		src++;
	}
	*cp = '\0';
	return (dest);
}
