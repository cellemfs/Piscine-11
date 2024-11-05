/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:28:43 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/11 19:28:49 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_str_is_uppercase(char *str)
{
	int	alpha;

	alpha = 0;
	while (str[alpha] != '\0')
	{
		if (str[alpha] >= 65 && str[alpha] <= 90)
		{
			alpha++;
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
	result = ft_str_is_uppercase("AHJJBURDRTDRDRTFDTFZ");
	printf("Result -> %i\n", result);
}*/
