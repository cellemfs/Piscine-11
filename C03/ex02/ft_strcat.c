/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:15:03 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/15 15:15:09 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*int main ()
{
	char dest[] = "Marcelle";
	char src[] = "teste";
	//printf("%s\n", ft_strcat(dest, src));
	//printf("%s\n", strcat(dest, src));
	//printf("Original->%s\n", strcat(dest, src));
	printf("Minha->%s\n", ft_strcat(dest, src));
	return 0;
}*/
