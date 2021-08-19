#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

/*#include <stdio.h>
int main()
{
	ft_putstr("aifej");
	return 0;
}
*/