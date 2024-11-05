/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:59:47 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/12 11:59:50 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	printf("%d", ft_strcmp("ABC", "ABC"));
	printf("\n%d", ft_strcmp("ABC", "AB"));
	printf("\n%d", ft_strcmp("ABA", "ABZ"));
	printf("\n%d", ft_strcmp("ABJ", "ABC"));	
}*/
