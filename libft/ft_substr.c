#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int	i;	

	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (subs)
		return (NULL);	
	i = 0;
	while (start <= len)
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[i] = '\0';
	return (subs);
}


