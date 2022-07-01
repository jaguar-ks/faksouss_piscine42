/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:08:15 by faksouss          #+#    #+#             */
/*   Updated: 2022/06/11 15:32:43 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main()
{
	int *********p1;
	int ********p2;
	int *******p3;
	int ******p4;
	int *****p5;
	int ****p6;
	int ***p7;
	int **p8;
	int *p9;
	int h;
	p1 = &p2;
	p2 = &p3;
	p3 = &p4;
	p4 = &p5;
	p5 = &p6;
	p6 = &p7;
	p7 = &p8;
	p8 = &p9;
	p9 = &h;
	ft_ultimate_ft(p1);
	printf("%d",h);
}