int	ft_sqrt(int nb)
{
	unsigned int	i;
	unsigned int	num;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	num = nb;
	while (i * i <= num)
	{
		if (i * i == num)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
	printf("answer: %d", ft_sqrt(2147483647));
}
*/