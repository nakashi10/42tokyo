char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	c_des;
	int	c_src;
	int	i;

	c_des = 0;
	c_src = 0;
	i = 0;
	while (dest[c_des] != '\0')
		c_des++;
	while (src[c_src] != '\0')
		c_src++;
	if (c_src == 0)
	{
		while (c_des--)
			dest[c_des] = '\0';
	}
	else
	{
		while (n--)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char dest[] = "ABCDEFGHI";
	char src[] = "12345";
	char dest2[] = "ABCDEFGHI";
	char src2[] = "12345";

	ft_strncpy(dest, src, 3);
	printf("zibun: %s\n", dest);
	ft_strncpy(dest, src, 8); // ②s2の長さがnより少ない場合
	printf("zibun: %s\n", dest);
	strncpy(dest2, src2, 3); // ①s2の長さがn以上のとき
	printf("mihon: %s\n", dest2);
	strncpy(dest2, src2, 8); // ②s2の長さがnより少ない場合 
	printf("mihon: %s\n", dest2);

	return 0;
}*/