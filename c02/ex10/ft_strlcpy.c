/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:24:38 by faksouss          #+#    #+#             */
/*   Updated: 2022/06/14 16:24:50 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	sizeofsrc;
	unsigned int	i;

	sizeofsrc = 0;
	i = 0;
	while (src[sizeofsrc])
		sizeofsrc++;
	if (size < 1)
		return (sizeofsrc);
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (sizeofsrc);
}
