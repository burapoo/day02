/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burapoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:56:43 by burapoo           #+#    #+#             */
/*   Updated: 2020/06/22 09:12:38 by burapoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb<0)
	{
		ft_putchar('-');
		nb = nb* -1;
	}
	if(nb/10 > 0)
		ft_putnbr(nb/10);
		ft_putchar(nb%10 + 48);
}
