void ft_bzero(void *s, size_t n)
{
	char *d;

	d = (char *) s;
	while (n > 0)
		d[--n] = '\0';
	s = (void *) d;
	return (s);
}
