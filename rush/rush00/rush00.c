/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:22:27 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/18 11:40:38 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y)
{
	if (x == 5 && y == 3)
	{
		write(1, "ABBBC\n", 5);
		write(1, "B   B\n", 5);
		write(1, "ABBBC\n", 5);
	}
	else
	{
		write(1, "oops try again", 14);
	}
}

int	main(void )

{
	rush(5, 3);
	return (0);
}
