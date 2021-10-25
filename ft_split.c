#include <stdlib.h>
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	ind;
	int	word_conter;

	ind = 0;
	word_conter = 0;
	while (s[ind])
	{
		while (s[ind] == c)
			ind++;
		if (s[ind] != '\0')
			word_conter++;
		while (s[ind] && (s[ind] != c))
			ind++;
	}
	return (word_conter);
}

static char	*ft_extract_word(char const *s, int n)
{
	char	*extracted_word;
	int		ind;

	ind = 0;
	extracted_word = (char *)malloc(sizeof(char) * n + 1);
	if (extracted_word == NULL)
		return (NULL);
	while (ind < n)
	{
		extracted_word[ind] = s[ind];
		ind++;
	}
	extracted_word[ind] = 0;
	return (extracted_word);
}

char	**ft_split(char const *s, char c)
{
	int		ind;
	int		word_ind_start;
	int		num_word_splitted;
	char	**splitted_words;

	ind = 0;
	num_word_splitted = 0;
	splitted_words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (splitted_words == NULL)
		return (NULL);
	while (s[ind])
	{
		while (s[ind] == c)
			ind++;
		word_ind_start = ind;
		while (s[ind] && s[ind] != c)
			ind++;
		if (ind > word_ind_start)
		{
			splitted_words[num_word_splitted] = \
			ft_extract_word(s + word_ind_start, ind - word_ind_start);
			num_word_splitted++;
		}
	}
	splitted_words[num_word_splitted] = NULL;
	return (splitted_words);
}