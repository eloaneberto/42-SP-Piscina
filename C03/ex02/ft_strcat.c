#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char a[80] = "se você juntar as strings.";
	char b[80] = "Essa mensagem só faz sentido ";

	ft_strcat(b, a);
	printf("%s\n", b);
	return (0);
}

char *ft_strcat(char *dest, char *src)
{
	int		i = 0;
	int		j = 0;

	while (dest[i])
		++i;
		
	while (src[j])
	{
		dest[i] = src[j];
		++i;
		++j;
	}

	return (dest);
}
