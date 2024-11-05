/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:09:01 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/11 19:09:07 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	alpha;

	alpha = 0;
	while (str[alpha] != '\0')
	{
		if (str[alpha] >= 97 && str[alpha] <= 122)
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
	result = ft_str_is_lowercase("abjhbjvKz");
	printf ("Result -> %i\n", result);
}*/
