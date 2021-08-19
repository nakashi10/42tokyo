int	ft_atoi(char *str)
{
	int	i;
	int	odd;
	int	num;

	i = 0;
	odd = 1;
	num = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			odd = odd * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		num = num * 10 + (str[i++] - 48);
	return (odd * num);
}

/*#include <stdio.h>

int main(int argc, char *argv[])
{
	argc = argc;
	printf("%d",ft_atoi(argv[1]));

	return (0);
}
*/