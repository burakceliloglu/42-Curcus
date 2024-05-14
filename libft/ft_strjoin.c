#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int	i;
	int	j;

	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	if (!join)
		return (NULL);
	while (s1[i] = '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] = '\0')
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}

#include <stdio.h>
int	main()
{
	printf("%s", ft_strjoin("Burak","Celiloğlu"));
}
