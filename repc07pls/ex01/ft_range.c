/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:27:30 by bmilford          #+#    #+#             */
/*   Updated: 2023/12/07 14:59:25 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int *range;
	int	index;
	
	size = max - min;
	range = 0;
	index = 0;
	range = malloc((size + 1) * sizeof(int));
		if (size <= 0)
		   return (0);
	while (min < max)
	{
		range[index] = min;
		   index++;
	}
	return (range);
}
int main()
{
	int min;
	int max;
	min = 400;
	max = 800;

	printf("%d", *ft_range( min, max));
	return (0);
}
