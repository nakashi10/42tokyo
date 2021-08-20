#include <unistd.h>
void	put_char(int n);
int		put_n(int n);
int		ft_pow(int dn);
void	cal_num(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nb == 0)
		put_char(0);
	if (nb < 0)
		nb = put_n(nb);
	cal_num(nb);
}

void	cal_num(int nb)
{
	int	dn;
	int	dtotal;
	int	n;

	while (nb > 0)
	{
		nb = nb / 10;
		dn++;
	}
	dtotal = ft_pow(dn);
	while (dn > 0)
	{
		n = nb / dtotal;
		put_char(n);
		nb = nb % dtotal;
		dtotal = dtotal / 10;
		dn--;
	}
}

void	put_char(int n)
{
	char	c;

	c = 48 + n;
	write(1, &c, 1);
}

int	ft_pow(int dn)
{
	int	pow;

	pow = 1;
	while (dn > 1)
	{
		pow = 10 * pow;
		dn--;
	}
	return (pow);
}

int	put_n(int n)
{
	n = n * -1;
	write(1, "-", 1);
	return (n);
}

/*int main()
{
	ft_putnbr(-2147483648);
}
*/