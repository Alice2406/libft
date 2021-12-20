#include "libf.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				c;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			c = s1[i] - s2[i];
			return (c);
		}
	}
	return (0);
}

