#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������--ʹ��scanf
    scanf("%d%d",&num1,&num2);//ȡ��ַ����&
	
	
	//int sum = 0;//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	 sum = num1 + num2;
	 printf("sum = %d\n",sum);
	 return 0;
}



int a = 100;
int main()

{

	int a = 1;
	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ���ײ���bug
	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
	printf("%d\n", a);

	return 0;

}


int num2 = 100;//ȫ�ֱ���--�����ڴ�����ⲿ
int main() 
{
	int num1 = 10;//�ֲ�����--�����ڴ�����ڲ�
	return 0;


}


int main()
{
	/*printf("hello \n");
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	short int age = 20;
	
	char a = 'b';
	printf("% c\n", a);


	return 0;*/
}