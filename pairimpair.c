#include <stdio.h>

int main() {
    int nb;

    scanf("%d", &nb);

    if (nb == 0) {
        printf("0 ne peut pas être pair ou impair");
        return 0;
    }

    if (nb % 2 == 0)
    {
        printf("L'argument est pair");
        return 0;
    }
    printf("L'argument est impair");
    return 0;
}