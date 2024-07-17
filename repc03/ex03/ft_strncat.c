/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:31:06 by bmilford          #+#    #+#             */
/*   Updated: 2023/11/28 16:29:22 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	end;

	index = 0;
	end = 0;
	while (dest[index] != '\0')
		index++;
	while (src[end] != '\0' && end < nb)
	{
		dest[index] = src[end];
		index++;
		end++;
	}
	if (src[end] == '\0' || end == nb)
		dest[index] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char str1[1024];
	char str2[1024];

	printf("%s\n",ft_strncat(str1,"whiole",7));
	printf("%s\n",strncat(str2,"whiole",7));
	printf("%s\n", ft_strncat(str1,"Yum",6));
	printf("%s\n", strncat(str2,"Yum",6));
	return (0);
}*/
