#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str && len > 0)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (str[i] == to_find[i] && to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
		len--;
	}
	return (0);
}
