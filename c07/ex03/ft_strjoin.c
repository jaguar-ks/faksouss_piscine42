/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:51:14 by faksouss          #+#    #+#             */
/*   Updated: 2022/06/27 07:46:47 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_null(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
}

int	ft_total_len(char **strs, char *sep, int size)
{
	int	len;
	int	i;

	i = 0;
	len = (size - 1) * ft_strlen(sep);
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	destsize;
	int	i;

	destsize = 0;
	i = 0;
	while (dest[destsize])
		destsize++;
	while (src[i])
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		len;
	char	*dest;

	dest = NULL;
	if (size == 0)
	{
		*dest = '\0';
		return (dest);
	}
	j = 0;
	len = ft_total_len(strs, sep, size);
	dest = (char *)malloc(sizeof(dest) * len);
	ft_null(dest, len);
	if (dest == NULL)
		return (NULL);
	while (j < size)
	{
		ft_strcat(dest, strs[j]);
		if (j < size - 1)
			ft_strcat(dest, sep);
		j++;
	}
	return (dest);
}

int main(int ac, char **av)
{
	printf("%s",ft_strjoin(ac,av,"|  |"));
}