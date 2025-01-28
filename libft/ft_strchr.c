/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:07:15 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 19:41:55 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	ch;

	ch = (char)c;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (NULL);
}

// int main() {
//     const char *string = "Hello, World!";
//     char target = 'o';

//     char *result = ft_strchr(string, target);

//     if (result != NULL) {
//         printf("Das Zeichen '%c' wurde gefunden: %s\n", target, result);
//     } else {
//         printf("Das Zeichen '%c' wurde nicht gefunden.\n", target);
//     }

//     // Test mit dem Nullterminator
//     target = '\0';
//     result = ft_strchr(string, target);

//     if (result != NULL) {
//         printf("Das Nullterminator wurde gefunden: %s\n", result);
//     } else {
//         printf("Das Nullterminator wurde nicht gefunden.\n");
//     }

//     return 0;
// }