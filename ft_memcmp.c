#include "libft.h"

int ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	n;
	unsigned char *cpyp1;
	unsigned char *cpyp2;

	cpyp1 = (unsigned char *)p1;
	cpyp2 = (unsigned char *)p2;
	n = 0;
	if (!cpyp1 || !cpyp2)
		return (0);
	while (n < size)
	{
		if (cpyp1[n] == cpyp2[n])
			n++;
		else
			return(cpyp1[n] - cpyp2[n]);	
	}
	return (0);
}
