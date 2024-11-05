/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:03:07 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/10 17:03:10 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	a;
	int	b;
	int	d;
	int	m;
	
	a = 36;
	b = 5;
	
	ft_div_mod(a, b, &d, &m);
	printf("div = %i\n", d);
	printf("mod = %i\n", m);
}*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
