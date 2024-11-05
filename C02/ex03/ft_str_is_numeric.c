/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:23:54 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/11 17:23:58 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	number;

	number = 0;
	while (str[number] != '\0')
	{
		if (str[number] >= 48 && str[number] <= 57)
		{
			number++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int main(void)
{
	int result;
	result = ft_str_is_numeric("-4548");
	printf ("Result -> %i\n", result);
}*/
