int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = -1;
	while ((s1[++i] != '\0' || s2[i] != '\0') && n-- != 0)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

/*#include <stdio.h>
int main()
{
	int iRet;

	iRet = ft_strncmp("12345", "123",3);
	printf("zibun: %d\n", iRet);

	iRet = ft_strncmp("12347", "12345",5);
	printf("zibun: %d\n", iRet);

	iRet = ft_strncmp("12345", "12346",5);
	printf("mihon: %d\n", iRet);

	return 0;
}
*/