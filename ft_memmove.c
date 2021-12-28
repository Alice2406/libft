#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*destcpy;
	char	*srccpy;

	destcpy = (char *) dest;
	srccpy = (char *) src;
	while (size > 0)
	{
		--size;
		destcpy[size] = srccpy[size];
	}
	destcpy = (void *)dest;
	return (dest);
}
