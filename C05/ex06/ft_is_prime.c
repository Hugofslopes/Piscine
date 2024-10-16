/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:35:41 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/22 17:55:55 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h> */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	if (nb <= 0)
		return (0);
	prime = 0;
	i = nb / 2;
	while (i > 0)
	{
		if (nb % i == 0)
			prime ++;
		i--;
	}
	if (prime == 1)
		return (1);
	else
		return (0);
}

/* int	main(int argc, char **argv)
{
	int	count;
	int	a;

	count = 1;
	while (count <= argc - 1)
	{
		a = atoi(argv[count]);
		printf("%d\n", ft_is_prime(a));
		count++;
	}
} */
