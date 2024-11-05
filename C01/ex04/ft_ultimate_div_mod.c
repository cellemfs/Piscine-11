/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:57:21 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/10 17:57:23 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int d;
	int m;
	
	d = 16;
	m = 0;
	ft_ultimate_div_mod(&d, &m);
	printf("%i | %i", d, m);
}*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;

	mod = *a % *b;
	*a = *a / *b;
	*b = mod;
}
