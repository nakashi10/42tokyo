char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[++i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str[] = "3aSDFGSdga";
	printf("answer: %s", ft_strlowcase(str));
	return 0;
}
*/