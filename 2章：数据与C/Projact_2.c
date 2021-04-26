/*
第二章：数据
十六进制输出
_Bool数据
年龄转换为秒
*/
#include<stdio.h>
#include<math.h>

//函数原型
void 奇数偶数判断();
long long int 年龄转换为秒();
float 厘米转换英尺();

int main(void)
{
	int a = 100;
	int* pointer_a = &a;

	//输出变量a的内存地址 ‘%x输出小写十六进制 %X输出大写十六进制
	printf("pointer_a=%x\n", pointer_a);
	printf("pointer_a=%X\n", pointer_a);

	//加入# 输出将会在十六进制数据前面加入0x
	printf("pointer_a=%#X\n", pointer_a);

	//函数调用
	奇数偶数判断();

	int aa = 0;
	printf("年龄：");
	scanf_s("%d", &aa);
	printf("秒:%lld", 年龄转换为秒(aa));

	int bb = 0;
	printf("请输入厘米：");
	scanf_s("%d", &bb);
	printf("%d厘米等于%f英尺", bb, 厘米转换英尺(bb));
	return 0;
}

//函数定义
void 奇数偶数判断(void)
{
	_Bool b;
	int c;
	printf("输入数值：");
	scanf_s("%d", &c);
	if (c % 2 == 0)
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	if (b == 1)
	{
		printf("值：%d为偶数\n", c);
	}
	else
	{
		printf("值：%d为奇数\n", c);
	}
}

long long int 年龄转换为秒(int 年龄)
{
	long long int 秒 = pow(10, 7) * 3.156 * 年龄;
	return 秒;
}

float 厘米转换英尺(int 厘米)
{
	float 英尺 = 厘米 / 2.54;
	return 英尺;
}
