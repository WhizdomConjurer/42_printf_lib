/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:01:50 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 16:45:36 by whi              ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	x;
	char	*str;

	x = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[x])
	{
		str[x] = (*f)(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}

// #include <stdio.h>

// char example_callback(unsigned int index, char c) {
// 	if (index % 2 == 0 && c >= 'a' && c <= 'z') {
// 		return c - 32; // Kleinbuchstaben -> Großbuchstaben
// 	}
// 	return c; // Anderen Charakter unverändert zurückgeben
// }

// int main() {
// 	char *input = "hello world";
// 	char *result;

// 	// ft_strmapi mit der Callback-Funktion testen
// 	result = ft_strmapi(input, example_callback);

// 	if (result) {
// 		printf("Original: %s\n", input);
// 		printf("Result  : %s\n", result);
// 		free(result); // Dynamisch allokierten Speicher freigeben
// 	} else {
// 		printf("Fehler: 
//Speicher konnte nicht allokiert werden oder Eingabe war ungültig.\n");
// 	}

// 	return 0;
// }