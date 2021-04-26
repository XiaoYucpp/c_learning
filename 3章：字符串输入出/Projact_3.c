#include<stdio.h>
#include<string.h>

#define BOOK "War and Peace"

void 课题5();

int main(void)
{
	char array_a[20] = "aaaaaaaaaaaaaaa";
	//sizeof是获取整个类型或者对象占用的字节长度，strlen是获取数组内的字节占的字节长度
	printf("sizef：%d|strlen：%d\n", sizeof(array_a), strlen(array_a));

	//const是一个限定符，用const声明的是变量不是常量，const会限制变量为只读类型
	const int cc = 12;
	
	课题5();
	return 0;
}

void 课题5()
{
	float cost = 12.99;
	float aaaa = 80.0;
	printf("This copy of %s srrlls for $%.2f.\nThat is %.0f%% of list.\n",BOOK,cost,aaaa);
}
