char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (dest[i] != '\0')
		i++;
	i--;
	while (src[++j] != '\0' && nb-- != 0)
		dest[++i] = src[j];
	dest[i + 1] = '\0';
	return (dest);
}
