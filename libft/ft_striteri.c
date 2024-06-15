void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}
