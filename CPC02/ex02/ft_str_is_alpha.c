int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0' )
		return (1);
	i = -1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	printf("answer: %d",ft_str_is_alpha("+LKjfa"));
	return 0;
}
