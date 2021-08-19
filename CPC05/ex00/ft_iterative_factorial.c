#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		sum = sum * nb;
		nb--;
	}
	return (sum);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(5));
}
*/