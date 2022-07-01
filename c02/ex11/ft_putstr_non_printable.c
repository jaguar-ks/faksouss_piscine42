/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:25:08 by faksouss          #+#    #+#             */
/*   Updated: 2022/06/14 16:26:09 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printabale(char *c)
{
	if (*c >= 32 && *c <= 126)
	{
		return (1);
	}
	return (0);
}

void	ft_to_hex(int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16)
	{
		write(1, &base[nb], 1);
	}
	else
	{
		ft_to_hex(nb / 16);
		ft_to_hex(nb % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printabale(&str[i]))
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_to_hex(str[i]);
		}
		i++;
	}
}
