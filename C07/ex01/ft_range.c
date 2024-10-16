/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:22:14 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/10/16 14:10:27 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*new_array;
	int	range;
	int	i;
	int	a;

	if (min >= max)
	{
		new_array = NULL;
		return (new_array);
	}
	range = max - min;
	new_array = malloc((range) * sizeof(int));
	if (new_array == NULL)
		return (0);
	i = 0;
	a = min;
	while (a < max)
	{
		new_array[i] = a;
		a++;
		i++;
	}
	return (new_array);
}

/* int main(int argc, char **argv)
{
    (void)argc;
    int a;
    int b;
    int i = 0;
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    int *array = ft_range(a, b);
    int num = (b -a);
    while (i  < num)
    {
        printf("%d\n", array[i]);
        i++;
    }
    free(array);
    return(0);
}  */
