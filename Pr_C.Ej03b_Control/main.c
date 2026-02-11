#include <stdio.h>
#include "caracteres.h"
#include <stdbool.h>

void echo(void);

int main(void)
{
    echo();
}

void echo(void)
{ 
    char c;

    do
    {
        c = getchar();
        if (!isEnter(c))
        {
            if (isLetter(c)) printf("Has introducido una letra: %c. ASCII = %i\n", c, c);
            if (isNumber(c)) printf("Has introducido un numero: %c. ASCII = %i\n", c, c);
            if (isOtherCharacter(c)) printf("Has introducido un caracter especial: %c. ASCII = %i\n", c, c);

            if (isLowerCase(c)) printf("Convertido a mayusculas: %c\n", toUpperCase(c));
            if (isUpperCase(c)) printf("Convertido a minusculas: %c\n", toLowerCase(c));
        }
    } while (c != 'q');
}
