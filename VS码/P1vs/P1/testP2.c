#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>




int main()
{
	//��Ŀ������ �� -������) sizeof  ++ --
	//˫Ŀ������ =  +���Ӻţ�
	//��ľ������ 
	int i = 0;
	int a [3] = { 1,2,3 };
	printf("����a�Ĵ�СΪ��%d �ֽ�\n", sizeof(a));
	i = sizeof(a) / sizeof(a[0]);
	printf("����a��Ԫ�ظ���Ϊ��%d ��\n", i);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);

}

int main()
{
	//(2����)λ����
	//  &-��λ��
	//  |-��λ��
	//  ^-��λ��򣺶�Ӧ�Ķ�����λ��ͬ����Ϊ0.��Ӧ�Ķ�����λ����ͬ����Ϊ1
	int a = 3;			//a�����ƣ�011 ʮ���ƣ�3

	int b = 5;			//b�����ƣ�101 ʮ���ƣ�5


	int c = a & b;		//c�����ƣ�001 ʮ���ƣ�1
	printf("&-��λ��������:%d\n", c);


	int d = a | b;		//d�����ƣ�111 ʮ���ƣ�7
	printf("|-��λ��������:%d\n", d);


	int e = a ^ b;      //e�����ƣ�110 ʮ���ƣ�6
	printf("^-��λ���������:%d\n", e);

}

int main()
{
	//�ƣ�2���ƣ�λ������
	//  <<����
	//  >>����
	int a = 1;
	printf("��λǰa��ֵ��%d\n", a);
	//����1ռ4���ֽ�-32bitλ
	// ��λǰ
	//00000000000000000000000000000001
	int b = a << 1;
	//��λ��
	//00000000000000000000000000000010
	printf("��λ��a��ֵ��%d\n", a); //a����1��aδ��
	printf("��λ��b��ֵ��%d\n",b);





	int x = 5 / 2;
	int y = 5 % 2;//ȡģ
	printf("5/2=%d.......%d\n", x,y);
	return 0;

}

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	while (i < 10)
	{
		printf("%d\n",arr[i]);
		i++;
	}
}

int a(int b, int c)//����a
{
	int d = b + c; //���ü����
	return d;      //����d����ͽ��
}
 int main()
{
	int num1 = 20;
	int num2 = 100;
	int sum = 0;
	// sum = num1 + num2;
	sum = a(num1, num2);//���ú���a
	 printf("sum = %d\n",sum);
	 return 0;
}

int main()
{
	int line = 0;
	printf("�������\n");

	while (line<2000)
	{
		printf("��һ�д���: %d\n",line);
		line++;
	}
	if (line >= 2000)
	
		printf("�õ���0ffer\n");
	
	


	return 0;

}

int main()
{
	int input = 0;
	printf("����\n");
	printf("��Ҫ�ú�ѧϰ��1 or 0 --> :");
	scanf("%d",&input);
	if (input == 1)
	{
		printf("��offer\n");
	}
	else
	{
		printf("������\n");
	}
	return 0;
}

int main() 
{
	printf("%s\n", "c:\test\32\test.c");


	//   \ddd----ddd��ʾ1-3���˽��Ƶ����֡���\130
	printf("%c\n", '\32');
	// \32 -- 32��2��8��������
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���Ϊascii��ֵ����Ӧ���ַ�
	//32 --> 10���� 26 ->��Ϊascii��ֵ������ַ�
	printf("%c\n", '\132');
	// \132�а˽���132ת��Ϊʮ����Ϊ90��������д��z��z
	//ע���˽����в���>=8����

	//   \xdd----dd��ʾ2��ʮ�����Ƶ����֡���\x30

	printf("%d\n", strlen("c:\test\32\test.c"));


	//
	
	return 0;
}

int main()
{
	char arr1[] = "abc";//����//"abc"--'a' 'b' 'c' '\0'--'\0'�ַ����Ľ�����־
	
	char arr2[] = { 'a','b','c' };//��Ϊû��\0,���Ժ�����ӡ���롰������.....������0Ҳ���ԣ���ΪASCII��\0��ʮ������0
	char arr3[] = { 'a','b','c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	 //��Ҫ����#include <string.h>
	printf("% d\n", strlen(arr1));//����1�ĳ���
	printf("% d\n", strlen(arr2));//����2�ĳ��ȣ���Ϊû��\0����ֱ�����������Ϊ\0�Ž���
	printf("% d\n", strlen(arr3));//����3�ĳ���

	return 0;


}

//ö�ٳ���
//ö�ٹؼ�--enum
enum sanyuanse
{
	RED,        //0
	YELLOW,     //1
	BLUE        //2
};
int main()
{
	enum sanyuanse a = BLUE;
	printf("%d\n",a);//���2
	return 0;

}