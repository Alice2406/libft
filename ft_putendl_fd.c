#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	n;

	n = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &n, 1);
}
