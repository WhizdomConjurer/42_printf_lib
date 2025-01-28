/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:55:03 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 19:39:26 by whi              ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count;
	size_t	s1_len;
	char	*dest;

	count = -1;
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	dest = (char *)malloc((sizeof (char)) * (s1_len + ft_strlen(s2) +1));
	if (!dest)
		return (NULL);
	while (s1[++count])
		dest[count] = s1[count];
	count = -1;
	while (s2[++count])
		dest[s1_len + count] = s2[count];
	dest[s1_len + count] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s1 = "Hello, ";
// 	char *s2 = "World!";
// 	char *result;

// 	// Test ft_strjoin
// 	result = ft_strjoin(s1, s2);
// 	if (result)
// 	{
// 		printf("Result of ft_strjoin: \"%s\"\n", result);
// 		free(result); // Nicht vergessen: Speicher freigeben!
// 	}
// 	else
// 	{
//         printf("ft_strjoin returned NULL\n");
// 	}

// 	// Test mit NULL-Werten
// 	result = ft_strjoin(NULL, s2);
// 	if (!result)
// 		printf("ft_strjoin(NULL, s2) returned NULL as expected\n");

// 	result = ft_strjoin(s1, NULL);
// 	if (!result)
// 		printf("ft_strjoin(s1, NULL) returned NULL as expected\n");

// 	result = ft_strjoin(NULL, NULL);
// 	if (!result)
// 		printf("ft_strjoin(NULL, NULL) returned NULL as expected\n");

// 	return 0;
// }