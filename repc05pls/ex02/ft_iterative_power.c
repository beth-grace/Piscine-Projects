/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:53:27 by bmilford          #+#    #+#             */
/*   Updated: 2023/12/06 13:11:40 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	product;

	product = nb;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		product *= nb;
		power--;
	}
	if (power == 1)
		return (product);
	return (0);
}
/*#include <stdio.h>
int main ()
{
	printf("%d" , ft_iterative_power( -1, 1));
	return (0);
} */
