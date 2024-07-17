/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:52:57 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/21 10:33:23 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	store1;
	int	store2;

	store1 = *a;
	store2 = *b;
	*a = store1 / store2;
	*b = store1 % store2;
}
