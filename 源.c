/*
�ڶ��£�����
ʮ���������
_Bool����
����ת��Ϊ��
*/
#include<stdio.h>
#include<math.h>

//����ԭ��
void ����ż���ж�();
long long int ����ת��Ϊ��();
float ����ת��Ӣ��();

int main(void)
{
	int a = 100;
	int* pointer_a = &a;

	//�������a���ڴ��ַ ��%x���Сдʮ������ %X�����дʮ������
	printf("pointer_a=%x\n", pointer_a);
	printf("pointer_a=%X\n", pointer_a);

	//����# ���������ʮ����������ǰ�����0x
	printf("pointer_a=%#X\n", pointer_a);

	//��������
	����ż���ж�();

	int aa = 0;
	printf("���䣺");
	scanf_s("%d", &aa);
	printf("��:%lld", ����ת��Ϊ��(aa));

	int bb = 0;
	printf("���������ף�");
	scanf_s("%d", &bb);
	printf("%d���׵���%fӢ��", bb, ����ת��Ӣ��(bb));
	return 0;
}

//��������
void ����ż���ж�(void)
{
	_Bool b;
	int c;
	printf("������ֵ��");
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
		printf("ֵ��%dΪż��\n", c);
	}
	else
	{
		printf("ֵ��%dΪ����\n", c);
	}
}

long long int ����ת��Ϊ��(int ����)
{
	long long int �� = pow(10, 7) * 3.156 * ����;
	return ��;
}

float ����ת��Ӣ��(int ����)
{
	float Ӣ�� = ���� / 2.54;
	return Ӣ��;
}