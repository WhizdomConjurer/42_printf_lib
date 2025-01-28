/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:16:24 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 11:07:56 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_ssubstr(const char *s, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s || len == 0)
		return (NULL);
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		sub[i] = s[i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

static int	ft_count_words(const char *str, char c)
{
	int		count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
			in_word = 0;
		str++;
	}
	return (count);
}

static void	ft_free_all(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**ft_split_v2(const char *s, char c, char **out)
{
	const char	*start;
	int			i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			out[i] = ft_ssubstr(start, s - start);
			if (!out[i++])
			{
				ft_free_all(out);
				return (NULL);
			}
		}
		else
			s++;
	}
	out[i] = NULL;
	return (out);
}

char	**ft_split(const char *s, char c)
{
	char	**out;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	out = (char **)malloc((words + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	out[words] = NULL;
	return (ft_split_v2(s, c, out));
}

// #include <stdio.h>

// int main(void)
// {
//     char str[] = "Hello world, this is a test string!";
//     char delimiter = ' ';
//     char **result;
//     int i = 0;

//     // Test the ft_split function
//     result = ft_split(str, delimiter);
//     if (!result)
//     {
//         printf("Error: ft_split returned NULL\n");
//         return (1);
//     }

//     // Print each word in the result array
//     printf("Result of ft_split:\n");
//     while (result[i] != NULL)
//     {
//         printf("Word %d: %s\n", i, result[i]);
//         free(result[i]); // Free each string
//         i++;
//     }

//     free(result); // Free the array itself
//     return (0);
// }