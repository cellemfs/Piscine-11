/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:53:40 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/10 15:53:44 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_ultimate_ft(int*********nbr);

int	main(void)
{
	int	n;	
	int	*nbr1;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int	********nbr8;
	int	*********nbr;

	n = 13;
		
	nbr1 = &n;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;	
	
	printf("Before -> %i\n", n);
	ft_ultimate_ft(nbr);
	printf("After -> %i\n", n);
	return (0);
}*/
void	ft_ultimate_ft(int*********nbr)
{
	*********nbr = 42;
}
