#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



int main()
{
	char x = '1';
	printf("%c\n", x);
	char* p = &x;
	*p = '3';
	printf("%c\n", x);
	printf("%d\n", sizeof(p));
	//ָ����32λƽ̨�Ĵ�СΪ4�ֽ�
	//ָ����64λƽ̨�Ĵ�СΪ8�ֽ�
	printf("%d\n", sizeof (char *));//ָ����64λƽ̨�Ĵ�СΪ8�ֽ�
	printf("%d\n", sizeof(short *));//ָ����64λƽ̨�Ĵ�СΪ8�ֽ�
	printf("%d\n", sizeof (int *));//ָ����64λƽ̨�Ĵ�СΪ8�ֽ�
	printf("%d\n", sizeof (double *));//ָ����64λƽ̨�Ĵ�СΪ8�ֽ�
	return 0;
}


int main ()
{
	int a = 10;//4���ֽ�
	int* p = &a;//ȡ��ַ
	printf("%p\n", &a);
	printf("%p\n",p);
	//��һ�ֱ�����������ŵ�ַ��----ָ�����
	//printf("%p\n", &a);
	*p = 20;//* ---�����ò�����
	printf("a = %d\n", a); 
	return 0;
}

//#define �����ʶ������ eg��#define a 100
//#define  ���Զ����--������
//�����Ķ��巽ʽ
int Max(int x, int y)
{ 
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
//��Ķ��巽ʽ
#define MAX(X,Y)(X>Y?X:Y)
int main()
{
	int a = 10;
	int b = 20;
	//����
	int max = Max(a, b);
	printf("max = %d\n",max);
	//��ķ�ʽ
	max = MAX(a, b);
	//max = (a>b?a:b)
	printf("max = %d\n", max);
	return 0;

}


//static ���ξֲ�����
//�ֲ��������������ڱ䳤
//static ����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û����ʹ��
//static���κ���
// Ҳ�Ǹı亯���������� - ��׼ȷ
//static���κ����ı��˺�������������
// δ��static���εĺ������߱��ⲿ��������
//�ⲿ�������� - Ҫ��ʹ�øú�������һ�¾Ϳ���ʹ��
//��static���κ� �ⲿ��������-->�ڲ���������
//
//�����ⲿ����--extern   eg��extern int a
//��ͬһ���̲�ͬԴ�ļ���Ҳ��ʹ�øñ���
//
//
//ֻҪ���������ڴ��д���Ķ��Ƕ����ƵĲ���
//����----ԭ�룬���룬���� ��ͬ
//���������ڴ����� ���� ��ʽ�洢����
//     ԭ��           --->        ����         ---->        ����
//�� ֱ�Ӱ�������д       ��ԭ��ķ���λ����			  ������+1��
//   ���Ķ��������� ��		����λ��λȡ���õ���
//   eg:-2
// 10000000000000000000000000000010 --ԭ��
// 11111111111111111111111111111101 --����
// 11111111111111111111111111111110 --����


int main()
{
	//����������(��Ŀ������)
	int a = 10;
	int b = 22;
	int max = 0;
	max = (a > b ? a :b);
	printf("%d\n", max);
}


int main()
{
	int a;
	int b;
	int x;
	int z;
	// &-�ǰ�λ�룬 |�ǰ�λ��
	a = 2 & 1;//��10 & 01�����Ϊ00��0
	b = 2 | 1;//��10 | 01�����Ϊ11��3
	printf("%d\n", a);
	printf("%d\n", b);
	// &&���߼��룬||���߼��򣨽�����棨1��1���߼٣�0��
	x = 100 && 99;
	z = 100 || 0;
	printf("%d\n", x);//���Ϊ��
	printf("%d\n", z);//���Ϊ��
}



int main()
{

	//����a��ֵ���俴ǰ��++�ͺ���++������

	int a = 10;
	int b = a++;//����++���Ƚ�a��ֵ��b��a�Լ�1
	printf("a = %d��b = %d\n", a, b);//a = 11,b = 10
	
	a = 10;
	int c = ++a;//ǰ��++���Ƚ�a��ֵ��1�ٸ�ֵ��c
	printf("a = %d��c = %d\n", a,c);//a = 11,c = 11
}


int main()
{
	int a = 0;
	int b = ~a;
	// ~--����2���ƣ�λȡ��
	printf("%d\n",b);
	return 0;
}


int a(int x,int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
		printf("����ֵ�нϴ��ֵ�ǣ�%d", z);
		return z;
	}
	if (x < y)
	{
		z = y;
		printf("����ֵ�нϴ��ֵ�ǣ�%d", z);
		return z;
	}
	if (x = y)
	{	
		printf("����ֵ���");
	}
}
int main()
{
	int a1;
	int a2;
	int big = 0;
	printf("��������Ҫ�ȴ�С������ֵ��");
		scanf("%d%d", &a1, &a2);
		big = a(a1, a2);
	return 0;
}
