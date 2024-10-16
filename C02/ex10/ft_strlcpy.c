/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:48:18 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 19:18:06 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h> */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	srclen;

	srclen = ft_strlen(src);
	while (*src && --size)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (srclen);
}

/* int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n",argv[2]);
	printf("%d\n",ft_strlcpy(argv[1],argv[2], atoi(argv[3])));
	printf("%s\n",argv[1]);
}  */