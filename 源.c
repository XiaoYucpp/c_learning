/*
��һ�¿κ��⣺
main������
��׼�������
�������������
*/
#include<stdio.h>

//����ԭ��
void �������ַ();
//����ԭ��
int ����ת������();

int main(void)
{
	printf("XiaoYu G\n");
	printf("XiaoYu\nG\n");

	printf("XiaoYu");
	printf("Guo\n");

	//��������	���������ò���д��������ֵ����
	�������ַ();

	int ���� = 0;
	printf("������������䣺");
	scanf_s("%d", &����);
	//��ӡ�������ú󷵻ص�ֵ
	printf("ת�����Ϊ��%d��\n", ����ת��Ϊ����(����));

	return 0;
}

//��������
void �������ַ(void)
{
	printf("XiaoYu��ɽ��ʡ\n");
}

//��������
int ����ת��Ϊ����(int ����)
{
	int ���� = ���� * 365;
	return ����;
	
}