/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:45:03 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/22 18:02:17 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			index++;
		}
		else
			return (0);
	}
	return (1);
}
/*int main()
{
	char a[] = {"weQl"};
	printf("%d", ft_str_is_lowercase(a));
	return (0);
}*/
