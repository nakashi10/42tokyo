int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] != '\0' || s2[i] != '\0')
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

/*#include <stdio.h>
int main()
{
	int iRet;

	iRet = ft_strcmp("12345", "12345");
	printf("zibun: %d\n", iRet);

	iRet = ft_strcmp("12347", "12345");
	printf("zibun: %d\n", iRet);

	iRet = ft_strcmp("12345", "12346");
	printf("mihon: %d\n", iRet);

	return 0;
}
*/