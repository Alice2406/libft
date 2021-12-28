#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*d;

	d = (char *) b;
	while (len > 0)
		d[--len] = c;
	b = (void *)d;
	return (b);
}
