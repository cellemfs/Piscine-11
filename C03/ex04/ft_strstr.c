/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:00:08 by mmarques          #+#    #+#             */
/*   Updated: 2024/09/15 15:00:12 by mmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	f;

	s = 0;
	f = 0;
	if (to_find[f] == '\0')
	{
		return (str);
	}
	while (str[s] != '\0')
	{
		while (str[s + f] == to_find[f] && str[s + f] != '\0')
		{
			f++;
		}
		if (to_find[f] == '\0')
		{
			return (str + s);
		}
		s++;
		f = 0;
	}
	return (0);
}
/*int main(void)
{
	char *str1="NjNujnuMarcellIHIOHUIjMarcelleagdf";
	char *find="Marcellea";
	printf("Minha->%s\n", ft_strstr(str1,find));
	printf("Original->%s\n", strstr(str1,find));
	return (0);
}*/
