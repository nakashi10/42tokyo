int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str == "")
		return (1);
	while (str[++i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	printf("answer: %d", ft_str_is_lowercase("3afasdga"));
	return 0;
}
*/