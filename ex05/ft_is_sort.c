/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 19:43:53 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/09/20 19:50:29 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int	i;
	int	sym;
	int	sym1;

	sym = 0;
	sym1 = 0;
	if (length == 0)
		return (1);
	i = 0;
	while (i < (length - 1) && !sym)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			sym = 1;
		i++;
	}
	i = 0;
	while (i < (length - 1) && !sym1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			sym1 = 1;
		i++;
	}
	if (sym && sym1)
		return (0);
	return (1);
}
