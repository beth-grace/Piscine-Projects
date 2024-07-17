/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:17:16 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/29 13:41:48 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		else
			index++;
	}
	while (s1[index] == '\0' || s2[index] == '\0')
	{
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
		else if (s1[index] < s2[index])
			return (-1);
		return (1);
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	printf("%d\n",ft_strcmp("2,5","2,3"));
	printf("%d\n",ft_strcmp("13, 52, 2", "6, 90, 21"));
	printf( "%d\n", strcmp("2,5","2,3"));
	printf("%d\n", strcmp("13, 52, 2", "6, 90, 21"));
	printf("%d\n", ft_strcmp("2,4,8","2,4"));
	printf("%d\n", strcmp("2,4,8","2,4"));
	return (0);
}*/
