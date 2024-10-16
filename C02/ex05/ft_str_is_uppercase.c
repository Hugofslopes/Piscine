/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:38:14 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 18:49:30 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}

/*  int main(int argc, char **argv)
{
	(void)argc;
	printf("%d",ft_str_is_uppercase(argv[1]));
} 
 */