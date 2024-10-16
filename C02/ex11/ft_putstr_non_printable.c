/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:39:31 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/12 14:32:39 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_to_hexa(char c)
{
	int	decimalnumber;
	int	temp;
	int	numb;

	decimalnumber = c;
	temp = decimalnumber / 16;
	if (temp < 10)
		temp = temp + 48;
	else
		temp = temp + 87;
	ft_putchar(temp);
	numb = decimalnumber % 16;
	if (numb < 10)
		numb = numb + 48;
	else
		numb = numb + 87;
	ft_putchar(numb);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			convert_to_hexa(str[i]);
		}
		i++;
	}
}

/* int	main(int argc, char **argv)
{
	(void)argc;
	ft_putstr_non_printable(argv[1]);

	return(0);
}   */