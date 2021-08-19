char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	tmp;
	int	count;

	i = -1;
	if (to_find[0] == '\0')
		return (str);
	while (str[++i] != '\0')
	{
		j = -1;
		tmp = i;
		count = 0;
		if (str[i] == to_find[0])
		{
			while (to_find[++j] != '\0')
				if (to_find[j] == str[tmp] && ++count)
					tmp++;
			if (j == count)
				return (&str[i]);
		}
	}
	return ("(null)");
}
