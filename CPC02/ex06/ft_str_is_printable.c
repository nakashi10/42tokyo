int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[++i] != '\0');
	if (str == "")
		return 1;
	while (i--)
	{
		if (!(str[i] >= 20 && str[i] <= 127))
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	printf("answer: %d", ft_str_is_printable(""));
	return 0;
}
*/