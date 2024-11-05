/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:55:06 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/11 14:55:09 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
	int	main(void)
{
                                 
	char	src[] = "kjugug";
	char 	des[] = "Great";
	printf("Minha: %s\n", ft_strcpy(des, src));
	printf("Original: %s", strcpy(des, src));
}


char	*ft_strcpy(char *dest, char *src)
{
	while(src[c] !n '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return(dest);
		
		
	}
	
	int m
}
