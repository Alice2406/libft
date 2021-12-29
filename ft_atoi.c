#include "libft.h"

int ft_atoi(const char *str)
{
	int	i;
	int	compteur;
	int	number;

	i = 0;
	compteur = 1;
	number = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			compteur = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9' && str[i])
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * compteur);
}
