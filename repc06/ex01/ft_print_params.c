/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:27:01 by bmilford          #+#    #+#             */
/*   Updated: 2023/12/07 12:23:49 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;
	int	size;

	index = 0;
	size = 1;
	while (size < argc)
	{
		while (argv[size][index] != '\0')
			index++;
		write (1, argv[size], index);
		write (1, "\n", 1);
		size++;
		index = 0;
	}
	return (0);
}
