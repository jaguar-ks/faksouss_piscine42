/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:47:04 by faksouss          #+#    #+#             */
/*   Updated: 2022/06/28 03:35:27 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
int	*ft_range(int min, int max)
{	
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
int main()
{
    int *n;
    unsigned int  i=0;
    n = ft_range(1,10);
    while (n != ((void *)0) && i < 9)
    {
        printf("%d\n",n[i]);
        i++;
    }
    if(n == ((void *)0))
        printf("this integer table is NULL\n");
}
