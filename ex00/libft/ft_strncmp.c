#include <stddef.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[count] == s2[count] \
		&& s1[count] != '\0' && s2[count] != '\0' && count < n - 1)
		count = count + 1;
	return (s1[count] - s2[count]);
}
