/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:18:57 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/25 16:19:23 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && index < n)
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		else
			index++;
	}
	while ((s1[index] == '\0' || s2[index] == '\0') && index < n)
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
	printf("%d\n", ft_strncmp("2,5","2,3",'2'));
	printf("%d\n", strncmp("2,5","2,3",'2'));
	printf("%d\n", ft_strncmp("13,52,2","13,52,21",'1'));
	printf("%d\n", strncmp("13,52,2","13,52,21",'1'));
	printf("%d\n", ft_strncmp("2,4,8","2,4",'3'));
	printf("%d\n", strncmp("2,4,8","2,4",'3'));
	return (0);
}*/
