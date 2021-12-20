#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;

	size_src = ft_strlen(src);
	if (size_src + 1 < size)
	{
		i = 0;
		while (i < size_src + 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (size != 0)
	{
		i = 0;
		while (i < size - 1)
		{
			dest[i] = src [i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size_src);
}

