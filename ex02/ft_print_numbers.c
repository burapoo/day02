/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burapoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:31:43 by burapoo           #+#    #+#             */
/*   Updated: 2020/06/19 17:39:31 by burapoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int d)
{
	write(1, &d, 1);
}

void	ft_print_numbers()
{
	int i;

	i = '0';

	while (i <= '9')
	{
		ft_putchar(i);
		i ++;
	}
}

int	main()
{
	ft_print_numbers();
	return(0);
}
