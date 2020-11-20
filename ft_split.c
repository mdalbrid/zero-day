/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrinkin <pdrinkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:06:30 by pdrinkin          #+#    #+#             */
/*   Updated: 2020/11/19 20:40:26 by pdrinkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(char const *set, char n)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (set[i] != '\0')
	{
		if (set[i] != n && (set[i + 1] == n || set[i + 1] == '\0'))
			count++;
		i++;
	}
	// printf("count: %d\n", count);
	return (count);
}

void	ft_start_end(char **word_array, char const *s, char n, int num_words)
{
	int len;
	int i;
	int start;
	int array_index;

	start = 0;
	array_index = 0;
	i = 0;
	while (array_index < num_words)
	{
		while (s[i] == n && s[i])
			i++;
		if (i == 0 || ((s[i] != n) && (s[i - 1] == n || s[i - 1] == '\0')))
			start = i;
		if (s[i + 1] == n || s[i + 1] == '\0')
		{
			len = i - start + 1;
			word_array[array_index] = ft_substr(s, start, len);
			if (!(word_array[array_index] = ft_substr(s, start, len)))
				return ;
			array_index++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**word_array;
	int		num_words;

	num_words = ft_count(s, c) + 1;
	if (!(word_array = ft_calloc(num_words, sizeof(char*))))
	ft_start_end(word_array, s, c, num_words);
	return (word_array);
}
/*
int		main(void)
{
	char const *set;
	char n;
	char **word_array;
	int num_words;
	int i;

	i = 0;
	n = '|';
	set = "split  ||this|for|me|||||!|";
	num_words = ft_count(set, n);
	//printf("num_words: %d\n", num_words);
	word_array = (char **)malloc(sizeof(char*) * num_words + 1);
	if (!word_array)
		return (0);
	word_array = ft_split(set, n);
	//printf("%d\n",ft_start_end ()ft_count(set, n));
	while (i < num_words +1)
	printf("%s\n", word_array[i++]);
}

*/
