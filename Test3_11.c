#include <stdio.h>
int main(void) {
	//1.
	int i_overflow = 2147483647 * 100;
	float f_overflow = 3.4E38 * 100;
	float f_underflow = -3.4E38 * 100;

	printf("�������磺%d\n���������磺%f\n���������磺%f\n\n", i_overflow, f_overflow, f_underflow);

	//2.
	int num;

	printf("����һ��ASCII��ֵ��__\b\b");
	scanf_s("%d", &num);
	printf("��ASCII����϶�Ӧ���ַ��ǣ�%c\n\n", num);

	//3.
	printf("\aStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n\n");

	//4.
	float f;

	printf("Enter a  floating-point value��");
	scanf_s("%f", &f);
	printf("fixed-point notation��%f\n", f);
	printf("exponential notation��%e\n", f);
	printf("p notation��%.2a\n\n", f);

	//5.
	double age;

	printf("������������䣺");
	scanf_s(" %lf", &age);
	printf("���Ѿ�����%e���ˣ�\n\n", age * 3.156E7);

	//6.
	double quart;

	printf("������ˮ�Ŀ�������");
	scanf_s(" %lf", &quart);
	printf("ˮ���ӵ�����Ϊ��%le��\n\n", quart * 950 / 3.0E-23);

	//7.
	float inch;

	printf("������ߣ�Ӣ�磩��");
	scanf_s("%f", &inch);
	printf("��������%f����\n\n", inch * 2.54);

	//8.
	double cup;

	printf("�����뱭����");
	scanf_s("%lf", &cup);
	printf("%g�����ڣ�%gƷ�ѣ�%g��˾��%g�����ף�%g����", cup, cup/2, cup * 8, cup * 16, cup * 48);

	return 0;
}