#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
		size_t size;

		size = 0;
		while (s1)
		{
			while (set)
			{
				if(*set == *s1)
					s1++;
				else if(!set)
					i++;
				set++;
			}
			s1++;
		}
