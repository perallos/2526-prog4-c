#ifndef CARACTERES_H_
#define CARACTERES_H_

#include <stdbool.h>

bool isUpperCase(char c);
bool isLowerCase(char c);
bool isLetter(char c);
bool isNumber(char c);
int isOtherCharacter(int c);
int isEnter(int c);

char toUpperCase(char c);
int toLowerCase(int c);

#endif /* CARACTERES_H_ */
