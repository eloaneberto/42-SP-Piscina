#include <unistd.h>

void ft_comb(void);

int main()
{
    ft_comb();

    return (0);
}

void ft_comb(void)
{
int f;
int s;
int t;

f = 0;
s = f + 1;
t = s + 1;

while (f <= '7')
{
    write(1, &f, 1);
    f ++;

    while (s <= '8')
    {
        write(1, &s, 1);
        s ++;

        while (t <= '9')
            {
                write(1, &t, 1);
                t ++;
            }
    }
}

}