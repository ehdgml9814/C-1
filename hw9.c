#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* change(char* str, int length)
{
	int i;
	const int diff = 'a' - 'A';
	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += diff;
			else
				str[i] = str[i];
		}
	}
	return str;
}

int main(void)
{
	char str[100];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	printf("Output> %s \n", change(str, strlen(str)));
	return 0;
}
//���ڿ� �Է¹޾� �빮�ڴ� �ҹ��ڷ� �ٲ� ���