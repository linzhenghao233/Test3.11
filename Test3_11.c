#include <stdio.h>
int main(void) {
	//1.
	int i_overflow = 2147483647 * 100;
	float f_overflow = 3.4E38 * 100;
	float f_underflow = -3.4E38 * 100;

	printf("整数上溢：%d\n浮点数上溢：%f\n浮点数下溢：%f", i_overflow, f_overflow, f_underflow);
	//输出结果：
	//整数上溢： - 100
	//浮点数上溢：inf
	//浮点数下溢： - inf

	//2.
	char ch;

	scanf("%c", &ch);
	printf("输入一个");

	return 0;
}