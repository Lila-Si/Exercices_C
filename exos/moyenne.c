#include <stdio.h>

int main() {
    int i = 0;
    int notes[] = {4, 13, 19, 8, 20};
    float result = 0;

    while (i < 5) {
        result += notes[i];
        i++;
    }
    i++;
    result /= i;

    printf("La moyenne de toutes les notes est %.2f", result);
}