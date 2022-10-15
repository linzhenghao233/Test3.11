#include <stdio.h>
int main(void) {
	//1.
	int i_overflow = 2147483647 * 100;
	float f_overflow = 3.4E38 * 100;
	float f_underflow = -3.4E38 * 100;

	printf("整数上溢：%d\n浮点数上溢：%f\n浮点数下溢：%f\n\n", i_overflow, f_overflow, f_underflow);

	//2.
	int num;

	printf("输入一个ASCII码值：__\b\b");
	scanf("%d", &num);
	printf("在ASCII码表上对应的字符是：%c\n\n", num);

	//3.
	printf("\aStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n\n");

	//4.
	float f;

	printf("Enter a  floating-point value：");
	scanf("%f", &f);
	printf("fixed-point notation：%f\n", f);
	printf("exponential notation：%e\n", f);
	printf("p notation：%.2a\n\n", f);

	//5.
	int age;

	printf("请输入你的年龄：");
	scanf(" %age", &age);
	printf("你已经活了%e秒了！\n\n", age * 3.156E7);

	//6.
	int kuatuo;

	printf("请输入水的夸脱数：");
	scanf(" %kuatuo", &kuatuo);	//连续的printf和scanf会导致跳过scanf，可在%kuatuo前面加个空格或\n刷新输出。
	printf("水分子的数量为：%ld个\n\n", kuatuo * 950 / 3.0E-23);

	//7.
	float inch;

	printf("输入身高（英寸）：");
	scanf("%inch", &inch);
	printf("你的身高是%.2f厘米\n\n", inch * 2.54);

	return 0;
}