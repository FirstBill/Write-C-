#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include<string.h>


//����
/*
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
*/










/*
//strcpy - string copy - �ַ�������  //������ͷ�ļ� #include<string.h>
//http://cplusplus.com/ ��ַ ����strcpy�ĸ�ʽ��  char * strcpy ( char * destination, const char * source );

#include<string.h>
int main()
{
	//strcpy - string copy - �ַ�������
	//strlen - string length - �ַ�������

	char arr1[] = "bit";
	char arr2[] = "###########";
	strcpy(arr2, arr1);//������arr1�����ݿ�����arr2����
	printf("%s\n", arr2);//��ӡ����������arr2������ݣ�bit

	return 0;
 }
 */










/*
//memset
//memory - �ڴ�     set - ����
//http://cplusplus.com/ ��ַ ����memset�ĸ�ʽ�� void* memset(void* ptr, int value, size_t num);

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//������ĵ�һ��д��һ��Ԫ�صĵ�ַ���ڶ���д��Ҫ���õ�ֵ(�ַ�Ҳ����ASCIIֵ������Ҳ��int�������ܷ��ַ���)��������д���ö��ٸ�
	printf("%s\n", arr);//��ӡ���: ***** world

	return 0;
}
*/









/*
//��������ɣ�

//ret_type fun_name(para1, *)  //ret_type ��������  fun_name ������  para1    ��������
//{
//	statement;//�����
//}

//eg��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}


//дһ�����������ҳ����������е����ֵ��

//���庯��
int get_max(int x, int y)
{
	if (x > y)
	{
		return x;//����y�ͷ���x
	}
	else
	{
		return y;//С�ڵ��ھͷ���y
	}

}

int main()
{
	int a = 10;
	int b = 20;
	//������ʹ��
	int max = get_max(a, b);
	printf("max = %d", max);
	return 0;
}
*/










//дһ���������Խ����������α��������ݡ�
/*
//������������д��������Ҫ��
int main()
{
	int a = 0;
	int b = 20;
	int tmp = 0; //tmpΪ��ʱֵ
	printf("a = %d,b = %d\n", a, b);//��ӡ���a = 0,b = 20
	tmp = a;
	a = b;
	b = tmp;
	printf("a = %d,b = %d\n",a, b);//��ӡ��� a = 20, b = 0
	return 0;
}
*/
/*
void Swap1(int x,int y) //void��ʾ�գ��޷���ֵ  //������������ⲻ��ʵ��Ҫ��
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa,int* pb)//��Ҫ���õ�ָ���֪ʶ  //��int* pa��int* pb�����ܷ����ĵ�ַ&a�� &b
{
	int tmp = 0;
	tmp = *pa;  
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 0;
	int b = 20;
	
	printf("a = %d,b = %d\n", a, b);//��ӡ���a = 0,b = 20
	
	// Swap1(a, b); //�������涨���Swap���� //���ַ��������ⲻ��ʵ��Ҫ��
	
	Swap2(&a, &b);//��Ҫ���õ�ָ���֪ʶ

	printf("a = %d,b = %d\n", a, b);//��ӡ��� a = 20, b = 0
	return 0;
}
*/