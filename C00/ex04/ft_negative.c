#include <unistd.h>

void ft_negative(int n);

int main(void)
{
    ft_negative(2);

    return (0);
}

void ft_negative(int n)
{
    char neg;
    char pos;

    neg = 'N';
    pos = 'P';

    if (n >= 0)
    {
        write(1, &pos, 1);
    }
    
    else if (n < 0)
    {
        write(1, &neg, 1);
    }
    
}