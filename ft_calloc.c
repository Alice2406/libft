#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
	void *pointer;
	pointer = malloc(sizeof(size) * count);
	ft_bzero(pointer, count);
	return (pointer);
}
