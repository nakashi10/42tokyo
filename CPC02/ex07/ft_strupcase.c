char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[++i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str[] = "3afasdga";
	printf("answer: %s", ft_strupcase(str));
	return 0;
}
*/