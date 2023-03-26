#include <stdio.h>

char *ft_strupcase(char *str);

int main ()
{
char teste[] = "abcdefghijklmnopqrstuvwxyz";

	printf("%s\n", ft_strupcase(teste));
}

char *ft_strupcase(char *str)
{
    int c = 0;
    
    while (str[c] != '\0')
    {
        if ((str[c] <= 'a') && (str[c] >= 'z'))
        str[c] -= 'A' - 'a';
        c++;
    }
    return (str);
}