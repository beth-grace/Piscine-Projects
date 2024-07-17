/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:05:26 by bmilford          #+#    #+#             */
/*   Updated: 2023/12/06 16:39:02 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (nb);
	if (nb > 0)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(8));
	return (0);
}*/
