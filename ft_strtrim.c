#include "libft.h"

static int	is_charset(char c, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int size_str(char const *s1, char const *set)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while(s1[i])
	{
		if(is_charset(s1[i], set) == 0)
			size++;
		i++;
	}
	return (size);
}

static unsigned int find_start(char const *s1, char const *set)
{
	unsigned int start;
	int i;

	start = 0;
	i = 0;
	while (s1[i])
	{
		if(is_charset(s1[i], set) == 1)
		{
			start++;
			i++;
		}
		else
			return (start);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int size;
	unsigned int start;

	size = size_str(s1, set);
	start = find_start(s1, set);
	str = ft_substr(s1, start, size);
	return (str);
}	
