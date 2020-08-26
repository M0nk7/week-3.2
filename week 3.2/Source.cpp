#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;
	scanf("%c", &a);
	if (a == 'a') printf("There is vowel");
	else if (a == 'e') printf("There is vowel");
	else if (a == 'i') printf("There is vowel");
	else if (a == 'o') printf("There is vowel");
	else if (a == 'u') printf("There is vowel");
	else printf("There is not vowel");
	return 0;
}