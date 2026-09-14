#include <stdio.h>

int main() {
    int i = 0;

    char name[20] = "";
    scanf("%19s", name);

    printf("Hello %s", name);
    return 0;
}