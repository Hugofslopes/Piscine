/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:29:27 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 19:31:20 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		il;

	i = 0;
	il = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (il == 1)
				str[i] -= 32;
			il = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			il = 0;
		else
			il = 1;
		i++;
	}
	return (str);
}

/* int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n",argv[1]);
	printf("%s",ft_strcapitalize(argv[1]));
}  */