#include "libft.h"

static int	size_str(int n)
{
	size_t count;
	long nbr;

	count = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		count++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		count++;
	}
	return(count);
}

char	*ft_itoa(int n)
{
	char *str;
	int count;
	int i;
	long nbr;

	count = size_str(n);
	nbr = n;
	i = 0;
	str = (char *)malloc (sizeof(*str) * (count + 2));
	if (n < 0)
	{
		i = 1;
		str[0] = '-';
		nbr = nbr * (-1);
	}
	str[count + 1] = '\0';
	while (count >= i)
	{
		str[count] = (nbr % 10) + 48;
		nbr = nbr / 10;
		count--;
	}
	return (str);
}

