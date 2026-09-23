#include <stdio.h>

int main() {
    int i = 1;
    int nb = 0;
    int result = 0;

    scanf("%d", &nb);
    while (i <= 10)
    {
        result = i * nb;
        printf("%d * %d = %d \n", nb, i, result);
        i++;
    }
    return 0;
}