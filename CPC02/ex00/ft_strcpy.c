char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while ( src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/*#include <stdio.h>
#include <string.h>
int main(){
	char src[] = "ABCDEF";
	char dest[] = "123";

	char src2[] = "ABCDEF";
	char dest2[] = "123";
	*ft_strcpy(dest, src);

	printf("zibun: %s\n", dest);
	strcpy(dest2,src2);
	printf("mihon: %s", dest);
	return 0;
}*/