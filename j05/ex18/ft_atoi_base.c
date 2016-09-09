int         ft_atoi_base(const char *nptr, const char *base);

static	int	isblank(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'		|| c == ' ');
}

static int	ind(char c, const char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(const char *nptr, const char *base)
{
	int		res;
	int		neg;
	int		blen;

	res = 0;
	blen = ft_strlen(base);
	if (blen < 2)
		return (0);
	while (isblank(*nptr))
		nptr++;
	neg = *nptr == '-';
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (ind(*nptr, base) < blen)
		res = res * blen - ind(*nptr++, base);
	return (neg ? res : -res);
}
	
