#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

enum vowel
{
    A = 97,
    E = 101,
    I = 105,
    O = 111,
    U = 117,
};

int main()
{
    char c;

    printf("Enter an word :");

    while ((c = getchar()) != EOF)
    {
        if (c == A || c == E || c == I || c == O || c == U)
        {
            c = '*';
        }
        putchar(c);
    }

    return 0;
}