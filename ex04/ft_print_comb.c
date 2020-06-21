/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burapoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:53:26 by burapoo           #+#    #+#             */
/*   Updated: 2020/06/21 15:49:03 by burapoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb()
{
	char i;
	char j;
	char k;
	i = '0';

	while(i <= '7')
	{
		j = i + 1;
		while(j <= '8')
		{
			k = i + 1;
			while(k <= '9')
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(k);
			ft_putchar(',');
			ft_putchar(' ');
			k = k + 1;
		}
		j = j + 1;
	}
	i = i + 1;
}
}

