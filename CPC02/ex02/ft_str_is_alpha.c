int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (str == "" )
		return (1);
	while (i--)
	{
		if(!(str[i] >= 97 && str[i] <= 122))
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	printf("answer: %d",ft_str_is_alpha("2za"));
	return 0;
}
*/