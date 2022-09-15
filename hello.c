#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2;
	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);
	printf("%d & %d = %d \n", num1, num2, num1&num2);
	printf("%d | %d = %d \n", num1, num2, num1|num2);
	printf("%d ^ %d = %d \n", num1, num2, num1^num2);
	return 0;
}
/*
void func();

int main(void)
{
	int result;
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	func();
	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
	return 0;
}

void func()
{
	printf("!!!");
}
*/



/*
int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d", (num1-num2)*(num2+num3)*(num3%num1));
	return 0;
}
*/
/*
int main(void)
{
	int num1;
	int num2;
	printf("정수 입력: ");
	scanf("%d", &num1);
	num2 = ~num1;
	printf("%d", num2 + 1);
	return 0;
}
*/