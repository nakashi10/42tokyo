char *ft_strcapitalize(char *str)
{
	int i;

	i = -1;
	while ( str[++i] != '\0')
	{
		if ( i == 0 )
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else if ((str[i] >= 97 && str[i] <= 122) && !((str[i - 1] >= 97 && str[i - 1] <= 122)) && !((str[i - 1] >= 48 && str[i - 1] <= 57)))
			str[i] -= 32;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("answer: %s", ft_strcapitalize(str));
	return 0;
}
*/