/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:11:30 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/12 11:11:33 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	alpha;

	alpha = 0;
	while (str[alpha] != '\0')
	{
		if (str[alpha] >= 65 && str[alpha] <= 90)
		{
			str[alpha] = str[alpha] + 32;
		}
		alpha++;
	}
	return (str);
}
/*int	main(void)
{
	char result[] = {"hdkufuGYGYGU"};
	ft_strlowcase(result);
	printf("Result -> %s\n", result);
}*/
