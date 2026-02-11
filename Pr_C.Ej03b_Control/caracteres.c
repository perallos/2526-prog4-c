#include "caracteres.h"
#include <stdbool.h>

bool isUpperCase(char c)
{
	if (c >= 65 && c <= 90) return true;
	else return false;
}
bool isLowerCase(char c)
{
	if (c >= 97 && c <= 122) return true;
	else return false;
}
bool isLetter(char c)
{
	if (isUpperCase(c) || isLowerCase(c)) return true;
	else return false;
}
bool isNumber(char c)
{
	if (c >= 48 && c <= 57) return true;
	else return false;
}
int isOtherCharacter(int c)
{
	if (!isNumber(c) && !isLetter(c)) return 1;
	else return 0;
}
int isEnter(int c)
{
	if (c == '\n') return 1;
	return 0;
}
char toUpperCase(char c)
{
	if (isLowerCase(c)) return c - 32;
	return -1;
}
int toLowerCase(int c)
{
	if (isUpperCase(c)) return c + 32;
	return -1;
}
