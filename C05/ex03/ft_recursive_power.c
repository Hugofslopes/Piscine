/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:26:51 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/22 17:55:30 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdlib.h>
#include <stdio.h> */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = ft_recursive_power(nb, power - 1) * nb;
	}
	return (nb);
}

/* int	main(int argc, char**argv)
{
	int	a;
	int	b;

	(void)argc;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", ft_recursive_power(a, b));
} */
