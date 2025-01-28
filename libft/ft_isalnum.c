/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:28:16 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 16:42:05 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x > 47 && x < 58) || (x > 64 && x < 91) || (x > 96 && x < 123))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char test_chars[] = {'a', 'Z', '9', '@', ' ', '0', 'k', '!', '1'};
// 	int i;

// 	printf("Testing ft_isalnum:\n");
// 	for (i = 0; i < (int)(sizeof(test_chars) / sizeof(test_chars[0])); i++)
// 	{
// 		char c = test_chars[i];
// 		int result = ft_isalnum(c);
// 		printf("Character: '%c' (ASCII: %d) 
//-> %s\n", c, c, result ? "alphanumeric" : "not alphanumeric");
// 	}
// 	return 0;
// }