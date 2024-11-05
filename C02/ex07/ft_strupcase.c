/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:57:35 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/12 10:57:38 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	alpha;

	alpha = 0;
	while (str[alpha] != '\0')
	{
		if (str[alpha] >= 97 && str[alpha] <= 122)
		{
			str[alpha] = str[alpha] - 32;
		}
		alpha++;
	}
	return (str);
}
/*int main(void)
{

	char result[] = {"fcbjHYHHHFIOfw"};
	ft_strupcase(result);
	printf("Result -> %s\n", result);	
}*/
