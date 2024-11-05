/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:59:21 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/11 11:59:25 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	alpha;

	alpha = 0;
	while (str[alpha] != '\0')
	{
		if ((str[alpha] >= 'A' && str[alpha] <= 'Z')
			|| (str[alpha] >= 'a' && str[alpha] <= 'z'))
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
/*int	main(void)
{
	int	result;
	result = ft_str_is_alpha("gr4gregr");
	printf("Result -> %i\n", result);
}*/
