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
	scanf("%d", &num);
	printf("��ASCII����϶�Ӧ���ַ��ǣ�%c\n\n", num);

	//3.
	printf("\aStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n\n");

	//4.
	float f;

	printf("Enter a  floating-point value��");
	scanf("%f", &f);
	printf("fixed-point notation��%f\n", f);
	printf("exponential notation��%e\n", f);
	printf("p notation��%.2a\n\n", f);

	//5.
	int age;

	printf("������������䣺");
	scanf(" %age", &age);
	printf("���Ѿ�����%e���ˣ�\n\n", age * 3.156E7);

	//6.
	int kuatuo;

	printf("������ˮ�Ŀ�������");
	scanf(" %kuatuo", &kuatuo);	//������printf��scanf�ᵼ������scanf������%kuatuoǰ��Ӹ��ո��\nˢ�������
	printf("ˮ���ӵ�����Ϊ��%ld��\n\n", kuatuo * 950 / 3.0E-23);

	//7.
	float inch;

	printf("������ߣ�Ӣ�磩��");
	scanf("%inch", &inch);
	printf("��������%.2f����\n\n", inch * 2.54);

	return 0;
}