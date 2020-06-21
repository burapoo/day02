/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burapoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:24:57 by burapoo           #+#    #+#             */
/*   Updated: 2020/06/21 15:24:23 by burapoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_comb()
{
	char a;
	char b;
	a = 0;
	while(a < 99)
	{
		b = a + 1;
		while(b <= 99)
		{
			ft_putchar(a/10 + '0');
			ft_putchar(a%10 + '0');
			ft_putchar(' ');
			ft_putchar(b/10 + '0');
			ft_putchar(b%10 + '0');
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a = a + 1;
	}
}
