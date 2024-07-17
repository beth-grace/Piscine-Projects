/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:01:22 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/28 16:28:57 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	end;

	index = 0;
	end = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[end] != '\0')
	{
		dest[index] = src[end];
		index++;
		end++;
	}
	if (src[end] == '\0')
	{
		dest[index] = '\0';
		return (dest);
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char	str1[1024];
	char	str2[1024];

	printf("%s\n", ft_strcat(str1,"funtimes"));
	printf("%s\n", strcat(str2,"funtimes"));
	printf("%s\n", ft_strcat(str1,"pls"));
	printf("%s\n", strcat(str2,"pls"));
	printf("%s\n", ft_strcat(str1,"oops"));
	printf("%s\n", strcat(str2,"oops"));
	return 0;
}*/
