char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	c_des;
	int	c_src;
	int	i;

	c_des = 0;
	c_src = 0;
	i = 0;
	while (src[c_src] != '\0')
		c_src++;
	if (c_src == 0)
	{
		while (dest[c_des] != '\0')
			dest[c_des] = '\0';
	}
	else
	{
		while (n != 0)
		{
			dest[i] = src[i];
			i++;
			n--;
		}
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char dest[] = "ABCD";
	char src[] = "12345678";
	char dest2[] = "ABCD";
	char src2[] = "12345678";

	// ft_strncpy(dest, src, 2);
	// printf("zibun: %s\n", dest);
	ft_strncpy(dest, src, 9);
	printf("zibun: %s\n", dest);
	// strncpy(dest2, src2, 2);
	// printf("mihon: %s\n", dest2);
	strncpy(dest2, src2, 9);
	printf("mihon: %s\n", dest2);

	return 0;
}
