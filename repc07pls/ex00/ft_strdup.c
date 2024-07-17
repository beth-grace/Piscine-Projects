/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:39:17 by bmilford          #+#    #+#             */
/*   Updated: 2023/12/07 16:18:21 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int	size;
	int	dest;
	int	index;
	
	size = 0;
	index = 0;
	while (src[size] != '\0')
		size++;
	dest = malloc((size + 1) * sizeof(char));
	while (src[size] != '\0')
	{
		dest[index] = src[index]
			index++;
	}
	dest[index] = '\0';
	return (0);
}
int main()
{
	int	 
