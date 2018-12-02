/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 07:36:18 by tduval            #+#    #+#             */
/*   Updated: 2018/11/21 07:39:33 by tduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_sort(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
			i = 0;
		}
		i++;
	}
	return (tab);
}