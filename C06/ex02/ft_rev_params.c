/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:53:22 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/22 12:00:35 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	i = 0;
	count = argc - 1;
	while (count > 0)
	{
		while (argv[count][i] != '\0')
		{
			write(1, &argv[count][i], 1);
			i++;
		}
		i = 0;
		count--;
		write(1, "\n", 1);
	}
}
