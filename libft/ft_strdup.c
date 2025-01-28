/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:10:31 by whi               #+#    #+#             */
/*   Updated: 2025/01/24 16:46:00 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// size_t	ft_strlen(const char *str)
// {
// 	int	len;

// 	if (!str || !*str)
// 		return (0);
// 	len = 0;
// 	while (str[len] != '\0')
// 		len++;
// 	return (len);
// }

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(const char) * ft_strlen(s1) + 1);
	if (str)
		str[ft_strlen(s1)] = '\0';
	else
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	const char *original = "Hello, World!";
// 	char *duplicate;

// 	// Test ft_strdup
// 	duplicate = ft_strdup(original);

// 	if (duplicate)
// 	{
// 		printf("Original string: %s\n", original);
// 		printf("Duplicated string: %s\n", duplicate);
// 		free(duplicate); // Wichtig: Speicher freigeben
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return 0;
// }