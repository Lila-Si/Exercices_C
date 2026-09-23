#include <stdio.h>

void printtable(int table[]) {
    int i = 0;
    while (i <= 6)
    {
        printf("%d ", table[i]);
        i++;
    }
}

int main() {
    int i = 0;
    int j = 0;
    int temp = 0;
    int table[] = {5, 4, 7, 1, 3, 2, 6};
    int sizetab = sizeof(table) / sizeof(table[0]);

    while (i < sizetab - 1)
    {
        j = 0;
        while (j < sizetab - i - 1)
        {
            if (table[j] > table[j + 1])
            {
                temp = table[j];
                table[j] = table[j + 1];
                table[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    printtable(table);
    return 0;
}