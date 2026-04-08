#include <stdlib.h>
#include <stdio.h>

// s-> " asd asd sdfsdf sdf sdfsd \0"
static int	word_count(char *s)
{
	int	i = 0;
	int	count = 0;

	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != ' ')
			i++;
	}
	return (count);
}

/*
0-declare count and i
1-iterate over string s
2-on each iteration iterate over empty spaces
3-on each iteration count the first string of word
3-on each iteration increse the index for the rest of the word (since counter increased once)
4-return counter
*/

static char	*word_dup(char *s, int start, int end)
{
	char	*word;
	int		i = 0;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

/*
0-declare word pointer and index
1-allocate memory for that word specified at the start-end integers
2-iterate over start<end
3-on each iteration fill word[i] with s[start] (also post increase the index and start)
4-set NULL TERMINATOR at the end of the word
5-return word
*/

char	**ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		start;
	char	**result;

	result = malloc(sizeof(char *) * (word_count(str) + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		start = i;
		while (str[i] && str[i] != ' ')
			i++;
		if (i > start)
			result[j++] = word_dup(str, start, i);
	}
	result[j] = NULL;
	return (result);
}

/*
0-declare index (i and j), start and result (array of arrays)
1-allocate memory for result with sizeof(char *) X word_count(str) + 1
2-iterate over str
3-on each iteration iterate over str[i] for empty spaces ' ' and increasy index (for starting spaces)
4-on each iteration set the start with i after spaces
5-on each iteration iterate over str[i] && str[i] != ' ' and increse index (for the rest of word since start set once to i and now we need end)
6-on each iteration if i > start then fill the resul[j] to word duplicate
7-set the end of the result to NULL
8-return result
*/

int main(void)
{
    char *test = "abc def ghi";
    char **res = ft_split(test);

    int i = 0;
    while (res[i])
    {
        printf("%s\n", res[i]);
        i++;
    }

    return 0;
}