int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[++i] != '\0');
	if ( str == "" )
		return 1;
	while (i--)
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	printf("answer: %d", ft_str_is_uppercase(""));
	return 0;
}
*/