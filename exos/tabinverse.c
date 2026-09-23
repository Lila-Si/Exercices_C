#include <unistd.h>

void writetab(int sizetab, char newtable[][10]) {
    int i = 0;
    int j = 0;

    while (i <= sizetab - 1)
    {
        while (newtable[i][j] != '\0')
        {
            write(1, &newtable[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        j = 0;
        i++;
    }
}

int main(){
    int i = 0;
    int j = 0;

    char* table[] = {"coucou", "salut", "bonjour", "a plus", "au revoir", "adieu"};

    int sizetab = sizeof(table) / sizeof(table[0]);

    char newtable[6][10];

    while (sizetab - 1 >= 0)
    {
        while (table[sizetab - 1][j] != '\0')
        {
            newtable[i][j] = table[sizetab - 1][j];
            j++;
        }
        newtable[i][j] = '\0';
        j = 0;
        i++;
        sizetab--;
    }

    sizetab = sizeof(newtable) / sizeof(newtable[0]);
    writetab(sizetab, newtable);

    return 0;
}