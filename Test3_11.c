#include <stdio.h>
int main(void) {
	//1.
	int i_overflow = 2147483647 * 100;
	float f_overflow = 3.4E38 * 100;
	float f_underflow = -3.4E38 * 100;

	printf("�������磺%d\n���������磺%f\n���������磺%f", i_overflow, f_overflow, f_underflow);
	//��������
	//�������磺 - 100
	//���������磺inf
	//���������磺 - inf

	//2.
	char ch;

	scanf("%c", &ch);
	printf("����һ��");

	return 0;
}