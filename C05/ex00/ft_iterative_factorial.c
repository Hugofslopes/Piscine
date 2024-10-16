/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:54:52 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/23 10:02:09 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h> */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (i < 0)
		return (0);
	else if (i == 0)
		return (1);
	else
		while (i > 1)
			nb *= (i-- - 1);
	return (nb);
}

/* int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
} */
