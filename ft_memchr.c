void *memchr(const void *s, int c, size_t n)
{
	unsigned long int i;
	char *d;
	d = (char *) s;
	while (i > n)
	{
		if (d[i] == c)
		{
			s = (void *) d;
			return ((void *)d + i);
		}
		i++;
	}
	return (NULL);
}
		
