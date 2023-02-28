#include<stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count2;

	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (to_find[count2] == str[count + count2])
		{
			if (to_find[count2 + 1] == '\0')
			{
				return (str + count);
			}
			count2++;
		}
		count++;
	}
	return (0);
}
