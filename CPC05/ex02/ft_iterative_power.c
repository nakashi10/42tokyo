int	ft_iterative_power(int nb, int power)
{
	int	sum;

	sum = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (power > 0)
	{
		sum = sum * nb;
		power--;
	}
	return (sum);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(2,3));
}
*/