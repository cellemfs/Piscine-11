/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:43:26 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/21 21:43:45 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 2)
	{
		while (x * x <= nb)
		{
			if (x * x == nb)
			{
				return (x);
			}
			x++;
		}
	}
	return (0);
}
/*int	main(void)
{
	printf("%d", ft_sqrt(49));
	return(0);
}*/
