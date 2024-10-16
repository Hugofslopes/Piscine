/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:09:03 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/25 12:59:09 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*new_string;
	int		i;

	i = 0;
	new_string = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

/* int main(int argc, char **argv)
{
    (void)argc;
    char *str = ft_strdup(argv[1]);
    printf("%s", str);
    free(str);
    return(0);
} */