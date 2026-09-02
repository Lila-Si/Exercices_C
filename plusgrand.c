#include <unistd.h>

void    ft_putnbr(int nb) {
    char result;

    if (nb < 0) {
        write(1, "-", 1);
        nb = nb * -1;
    }

    if (nb >= 10)
        ft_putnbr(nb / 10);
    result = nb % 10 + '0';
    write(1, &result, 1);
}

int     main() {
    int a = 2, b = 4, c = 6;
    /* S'amuser à les changer :) */

    if (a > b)
    {
        if (a > c)
            ft_putnbr(a);
        else
            ft_putnbr(c);
    }
    else
    {
        if (b > c)
            ft_putnbr(b);
        else
            ft_putnbr(c);
    }
    return 0;
}