/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:25:28 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/25 13:32:24 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = malloc(sizeof(int) * (i));
	if (result == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	*range = result;
	return (i);
}

/* int main(int argc, char **argv)
{
    (void)argc;
    int a;
    int b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    int *array_d[10];
    int size;

    size = ft_ultimate_range(array_d, a, b);
    printf("%d",size);
    return(0);
}  */