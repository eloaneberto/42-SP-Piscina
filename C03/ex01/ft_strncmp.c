#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	i[] = "Amora";
	char	j[] = "Amada";
	unsigned int number = 2;

    printf("%d", ft_strncmp(i, j, number));

	return (0);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int c = 0;
    
    while((s1[c] != '0') && (s2[c] != '0') && (n != 0) &&(s1[c] == s2[c]) && --n)
    c++;
    
    return (s1[c] - s2[c]);
}