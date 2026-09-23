#include <unistd.h>

int charcount(char* string) {
    int i = 0;

    while (string[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(int argc, char** argv) {
    int i = 0;

    if (argc != 2)
    {
        write(1, "L'argument donné n'est pas celui attendu", 41);
        return 0;
    }

    int lengthstring = charcount(argv[argc - 1]);
    while (argv[argc - 1][i] != '\0')
    {
        if (argv[argc - 1][i] == argv[argc - 1][lengthstring - 1])
        {
            i++;
            lengthstring--;
        }
        else
        {
            write(1, "Le mot rentré n'est pas un palindrome", 38);
            return 0;
        }
    }
    write(1, "Le mot donné est un palindrome !", 33);
    return 0;
}