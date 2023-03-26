#include <unistd.h>

void ft_print_reverse(void);

int main(void)
{
        ft_print_reverse();

        return (0);
}

void ft_print_reverse(void)
{
        char alpha;

        alpha = 'z';

        while(alpha >= 'a')
        {
                write(1, &alpha, 1);
                alpha--;
        }
}