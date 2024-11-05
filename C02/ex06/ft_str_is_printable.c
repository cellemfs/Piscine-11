/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:02:52 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/11 21:02:55 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	print;

	print = 0;
	while (str[print] != 0)
	{
		if (str[print] >= 32 && str[print] <= 126)
		{
			print++;
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
	int Result;
	
	Result = ft_str_is_printable("Hello\n");
	printf("Result-> %i\n", Result);
}*/
