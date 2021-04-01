/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharaguc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:09:35 by nharaguc          #+#    #+#             */
/*   Updated: 2021/03/30 14:09:39 by nharaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char moji;

	moji = 'z';
	while (moji >= 'a')
	{
		write(1, &moji, 1);
		moji--;
	}
}
