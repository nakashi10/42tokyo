int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	unsigned int	num;

	i = 2;
	if (nb <= 1)
		return (2);
	num = nb;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

#include <stdio.h>
int main()
{
	printf("answer: %d", ft_find_next_prime(14));
}
