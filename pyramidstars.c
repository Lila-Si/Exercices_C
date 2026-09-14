#include <stdio.h>

void print_stars(int i) {
    if (i > 0)
    {
        printf("*");
        print_stars(i - 1);
    }
    return ;
}

int main() {
    int i = 1;
    int nb = 0;

    scanf("%d", &nb);
    if (nb < 1)
    {
        printf("La pyramide n'est pas possible");
        return 0;
    }

    while (i <= nb)
    {
        print_stars(i);
        printf("\n");
        i++;
    }
}