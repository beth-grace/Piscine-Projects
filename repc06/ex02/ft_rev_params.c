/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:12:42 by bmilford          #+#    #+#             */
/*   Updated: 2023/12/06 18:31:47 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;
	int	size;

	index = 0;
	size = argc - 1;
	while (size > 0)
	{
		while (argv[size][index] != '\0')
			index++;
		write (1, argv[size], index);
		write (1, "\n", 1);
		size--;
		index = 0;
	}
	return (0);
}
