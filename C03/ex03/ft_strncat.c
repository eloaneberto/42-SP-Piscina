#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char a[80] = "se você juntar as strings.";
	char b[80] = "Essa mensagem só faz sentido ";
	unsigned int n = 5;

	ft_strncat(b, a, n);
	printf("%s\n", b);
	return (0);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i = 0;
	int	j = 0;

	while (dest[i])
		++i;
		
	while ((src[j]) && (j < nb))
	{
		dest[i] = src[j];
		++i;
		++j;
	}

	return (dest);
}