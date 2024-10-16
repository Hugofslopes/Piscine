/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:49:21 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/25 13:33:43 by hfilipe-         ###   ########.fr       */
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

int	full_size(char **str, int size)
{
	int	i;
	int	final_size;

	i = 0;
	final_size = 0;
	while (i < (size))
	{
		final_size += ft_strlen(str[i]);
		i++;
	}
	return (final_size);
}

char	*build_string(char **strs, char *new_string, int size, char *sep)
{
	int	i;
	int	h;
	int	j;
	int	size_two;

	h = 0;
	j = 0;
	i = 0;
	size_two = size;
	while (h < size_two)
	{
		while (strs[h][i] != '\0')
			new_string[j++] = strs[h][i++];
		i = 0;
		if (size -1 > 0)
		{
			while (sep[i] != '\0')
				new_string[j++] = sep[i++];
			size--;
		}
		i = 0;
		h++;
	}
	new_string[j] = '\0';
	return (new_string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		final_size;
	int		size_sep;
	char	*new_string;

	if (size == 0)
	{
		new_string = malloc(1 * sizeof(char));
		if (new_string == NULL)
			return (NULL);
		new_string[0] = '\0';
		return (new_string);
	}
	final_size = full_size(strs, size);
	i = size - 1;
	size_sep = ft_strlen(sep);
	new_string = malloc(((final_size + (i * size_sep)) + 1) * \
	sizeof(char));
	if (new_string == NULL)
		return (NULL);
	new_string = build_string(strs, new_string, size, sep);
	return (new_string);
}

/* int main(void)
{
    char *string [3];

    string[0]="abc";
    string[1]="xyz";
    string[2]="hij";
    char *sep = "!";
    char *new_string;
    new_string = ft_strjoin(3, string, sep);
	printf("%s",new_string);
    free(new_string);
    return(0);
}  */
