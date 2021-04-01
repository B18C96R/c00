/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharaguc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:42:24 by nharaguc          #+#    #+#             */
/*   Updated: 2021/03/30 14:42:27 by nharaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char suji[4];

	suji[0] = '0';
	while (suji[0] <= '9')
	{
		suji[1] = '0';
		while (suji[1] <= '9')
		{
			suji[2] = '0';
			while (suji[2] <= '9')
			{
				if (suji[0] < suji[1] && suji[1] < suji[2])
				{
					if (suji[2] != '2')
						write(1, ", ", 2);
					write(1, &suji, 3);
				}
				suji[2]++;
			}
			suji[1]++;
		}
		suji[0]++;
	}
}
