#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//char str[30] = "C language is easy";
	char str[30];
	int i = 0;

	printf("문자열: ");
	scanf("%[^\n]", str);
	while (str[i] != 0)
		i++;
	printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
	return 0;
}