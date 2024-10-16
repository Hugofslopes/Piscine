/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:37:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 18:45:17 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}

/* int main(int argc, char **argv)
{
(void)argc;
	printf("%d",ft_str_is_lowercase(argv[1]));
}  */
