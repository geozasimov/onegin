#include <stdio.h>

int main()
{
	///smth
	return 0;
}
int Puts(char* str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	printf("\n");

	return 0;
	}

char* StrChr(char *str, int c)
{
	while(*str != '\0')
	{
		if (*str == 'c')
		return str;
	}
	return NULL;
	}

int StrLen(char* str)
{
	int i;
	int n = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		n++;
	}
	return n;
}
//jhg