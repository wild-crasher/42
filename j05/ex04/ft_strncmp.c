int	ft_strncmp(const char *s1, const char *s2, int n);

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = -1;
	while ((*s1 || *s2) && ++i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
