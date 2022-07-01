/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 08:26:27 by faksouss          #+#    #+#             */
/*   Updated: 2022/06/19 08:26:33 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	h;

	h = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (h >= 1)
		nb *= h--;
	return (nb);
}
