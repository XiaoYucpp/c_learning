/*
第一章课后题：
main主函数
标准输入输出
多个函数及调用
*/
#include<stdio.h>

//函数原型
void 姓名与地址();
//函数原型
int 年龄转换天数();

int main(void)
{
	printf("XiaoYu G\n");
	printf("XiaoYu\nG\n");

	printf("XiaoYu");
	printf("Guo\n");

	//函数调用	”函数调用不用写函数返回值类型
	姓名与地址();

	int 年龄 = 0;
	printf("请输入你的年龄：");
	scanf_s("%d", &年龄);
	//打印函数调用后返回的值
	printf("转换结果为：%d天\n", 年龄转换为天数(年龄));

	return 0;
}

//函数定义
void 姓名与地址(void)
{
	printf("XiaoYu，山东省\n");
}

//函数定义
int 年龄转换为天数(int 年龄)
{
	int 天数 = 年龄 * 365;
	return 天数;
	
}
