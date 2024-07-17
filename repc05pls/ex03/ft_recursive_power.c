/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:27:24 by bmilford          #+#    #+#             */
/*   Updated: 2023/12/06 13:20:02 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("%d",ft_recursive_power(-2,8));
	return (0);
} */
