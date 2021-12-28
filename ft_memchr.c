#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *) s;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
		{
			return ((void *)d + i);
		}
		i++;
	}
	return (NULL);
}	
