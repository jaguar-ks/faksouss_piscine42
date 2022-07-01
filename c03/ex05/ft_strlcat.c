/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:42:14 by faksouss          #+#    #+#             */
/*   Updated: 2022/06/15 14:42:23 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ds;
	unsigned int	ss;

	i = 0;
	j = 0;
	ds = 0;
	ss = 0;
	while (dest[ds])
		ds++;
	while (src[ss])
		ss++;
	if (size <= ds)
		return (size + ss);
	j = size - ds - 1;
	while (src[i] && i < j)
	{
		dest[ds + i] = src[i];
		i++;
	}
	dest[ds + i] = '\0';
	return (ds + ss);
}
