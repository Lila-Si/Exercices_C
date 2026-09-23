#include <stdio.h>

int main() {
    float Celsius = 0.0;

    printf("Entrez la température en Celsius : ");
    scanf("%f", &Celsius);

    float Fahrenheit = (Celsius * 9/5) + 32;
    printf("%.2f Celsius égal %.2f Fahrenheit", Celsius, Fahrenheit);

    return 0;
}