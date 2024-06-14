#include "libft.h"

static size_t  ft_count_word(char const *s, char c)
{
    size_t  i;
    size_t  count;

    count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != c)
        {
            count++;
            while (s[i] != c)
                i++;
        }
        i++;
    }
    return (count);
}

char	**ft_split(char const *s, char c)
{
    char    **split;
    size_t  i;
    size_t  j;
    size_t  arr_index;

    i = 0;
    arr_index = 0;
    split = (char **)malloc((ft_count_word(s,c) + 1) * sizeof(char));
    if (!split)
        return (NULL);
    while (s[i])
    {
        while (s[i] == c)
            i++;
        j = i;
        while (s[j] != c)
            j++;
        if (ft_count_word(s, c) == arr_index)
			break ;
		split[arr_index++] = ft_substr(s, i, j - i);
		i = j;
    }
    split[arr_index] = 0;
    return (split);
}