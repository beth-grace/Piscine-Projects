/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:54:13 by bmilford          #+#    #+#             */
/*   Updated: 2023/12/06 16:27:54 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	again;

	again = 1;
	while (nb > 1)
	{
		again *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (again);
}
/*#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(8));
	return (0);
} */
