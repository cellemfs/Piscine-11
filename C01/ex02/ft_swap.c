/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:57:23 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/10 16:57:27 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int	x;
	int	y;
	
	y = 7;
	x = 8;

	printf("Before a = %i\n", x);
	printf("Before b = %i\n", y);
	ft_swap(&x, &y);
	printf("After a = %i\n", x);
	printf("After b = %i\n", y);

	
}*/
void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
