/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:38:51 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/22 11:43:56 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 47 && str[index] <= 57)
		{
			index++;
		}
		else
			return (0);
	}
	return (1);
}
/*int	main()
{
	char	a[] = {"we21"};
	printf("%d", ft_str_is_numeric(a));
	return (0);
}*/
