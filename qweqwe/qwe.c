#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//char str[30] = "C language is easy";
	char str[30];
	int i = 0;

	printf("���ڿ�: ");
	scanf("%[^\n]", str);
	while (str[i] != 0)
		i++;
	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n", str, i);
	return 0;
}