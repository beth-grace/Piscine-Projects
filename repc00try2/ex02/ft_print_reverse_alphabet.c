/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:43:27 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/19 12:21:57 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 123;
	while (count-- >= 98)
	{
		write (1, &count, 1);
	}
}
/*int main(void)
{
  		ft_print_reverse_alphabet();
	  	return (0);
}*/
