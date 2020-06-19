/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burapoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:04:56 by burapoo           #+#    #+#             */
/*   Updated: 2020/06/19 17:41:55 by burapoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_reverse_alphabet()
{
	char i;

	i = 'z';
	while(i >= 'a')
	{
		ft_putchar(i);
		i --;
	}
}

