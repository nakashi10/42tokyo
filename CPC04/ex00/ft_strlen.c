int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		i = i;
	return (i);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n",ft_strlen("aifej"));
	return 0;
}
*/