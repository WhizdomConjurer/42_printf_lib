/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:03:50 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 19:42:53 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	ft_num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			num_len;
	long int	num;
	char		*str;

	num_len = ft_num_len(n);
	str = (char *)malloc(sizeof(char) * (num_len + 1));
	if (!str)
		return (NULL);
	str[num_len] = '\0';
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num_len-- > 0 && str[num_len] != '-')
	{
		str[num_len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int test_values[] = {0, 123, 345, -123, 2147483647, -2147483648};
// 	size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);

// 	for (size_t i = 0; i < num_tests; i++)
// 	{
// 		int n = test_values[i];
// 		char *result = ft_itoa(n);

// 		if (result)
// 		{
// 			printf("Input: %d, Output: \"%s\"\n", n, result);
// 			free(result);
// 		}
// 		else
// 		{
// 			printf("Input: %d, Output: NULL (Memory allocation failed)\n", n);
// 		}
// 	}

// 	return 0;
// }