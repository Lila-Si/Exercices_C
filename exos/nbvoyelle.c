#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    int count = 0;
    char* string = "Une phrase ici pour faire joliiiii";
    char* voyelle[] = {"A", "a", "à", "ä", "E", "e", "é", "è", "ê", "ë", "I", "i", "ï", "O", "o", "ö", "U", "u", "ù", "ü"};

    while (string[i] != '\0')
    {
        if (j > 19)
        {
            j = 0;
            i++;
        }
        if (string[i] == voyelle[j][0])
        {
            count++;
            i++;
        }
        else
            j++;
    }
    printf("%d", count);
    return 0;
}