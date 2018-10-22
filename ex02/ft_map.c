/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:49:27 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/09/20 19:02:53 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *p;

	i = 0;
	if ((p = malloc(sizeof(*p) * (length + 1))) == NULL)
		return (0);
	while (i < length)
	{
		p[i] = f(tab[i]);
		i++;
	}
	return (p);
}
