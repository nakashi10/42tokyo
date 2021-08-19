char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;

	while(dest[++i] != '\0');

	i--;
	while(src[++j] != '\0')
		dest[++i] = src[j];
	dest[i+1] = '\0';

	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[30] = "Hello ";
	char str2[] = "World!";
	char str3[30] = "Hello ";
	char str4[] = "World!";

	// 文字列の連結
	ft_strcat(str1, str2);
	printf("ft_str: %s\n", str1);
	strcat(str3, str4);
	printf("str: %s\n", str3);

	return 0;
}
*/