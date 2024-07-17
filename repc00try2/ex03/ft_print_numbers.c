/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:06:00 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/19 12:26:26 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	count;

	count = 48;
	while (count >= 48 && count < 58)
	{
		write (1, &count, 1);
		count++;
	}
}
/*	int main()
	{
		ft_print_numbers();

			return 0;
	}*/
