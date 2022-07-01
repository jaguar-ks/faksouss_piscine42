/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 00:21:41 by faksouss          #+#    #+#             */
/*   Updated: 2022/06/19 00:21:45 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(char *str)
{
	int	i;
	int	j;

	j = 0;
	if (!str || !str[1])
		return (0);
	while (str[j])
	{
		if (!((str[j] >= '0' && str[j] <= '9')
				|| (str[j] >= 'A' && str[j] <= 'Z')
				|| (str[j] >= 'a' && str[j] <= 'z')))
			return (0);
		i = j + 1;
		while (str[i])
		{
			if (str[i] == str[j])
				return (0);
			i++;
		}
		j++;
	}
	return (j);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			i;
	int			tab[200];
	int			bt;

	i = 0;
	n = nbr;
	bt = check(base);
	if (bt)
	{
		if (n < 0)
		{
			n = -n;
			write(1, "-", 1);
		}
		while (n)
		{
			tab[i] = n % bt;
			n /= bt;
			i++;
		}
		while (i > 0)
			ft_putchar(base[tab[--i]]);
	}
}
