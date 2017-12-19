/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:05:08 by seliasbe          #+#    #+#             */
/*   Updated: 2016/11/07 19:01:27 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int cnt;
	int i;

	if (min >= max)
	{
		tab = 0;
		return (tab);
	}
	else
	{
		cnt = max - min;
		tab = (int *)malloc(sizeof(int) * cnt);
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	return (tab);
}
