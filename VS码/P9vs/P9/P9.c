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
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//����Swap1�ﲻ����ֵ��ʵ�ε�Ч��
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
	
	// Swap1(a, b); //�������涨���Swap1���� //���ַ��������ⲻ��ʵ��Ҫ��
	
	Swap2(&a, &b);//�������涨���Swap2����  //��Ҫ���õ�ָ���֪ʶ

	printf("a = %d,b = %d\n", a, b);//��ӡ��� a = 20, b = 0
	return 0;
}
*/










/*
//�����Ĳ�����

//1.ʵ�ʲ�����ʵ�Σ���
//��ʵ���������Ĳ�������ʵ�Ρ�
//ʵ�ο����ǣ����������������ʽ�������ȡ�
//����ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա����Щֵ���͸��βΡ�

//2.��ʽ�������βΣ���
//��ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ������������
//�浥
//Ԫ�������Խ���ʽ��������ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������
//Ч��



//�����ĵ��ã�

//1.��ֵ����
//�������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�

//2.��ַ����
//��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ�
//�������ⲿ�ı�����
*/










/*
//дһ�����������ж�һ�����ǲ�������

#include<math.h>

int is_prime(int n)//������������򷵻�1����������򷵻�0��Ҳ���ǳ���1�����������⻹�б��������������
                   
{
	int z = 2;
	for ( z = 2; z <= sqrt(n); z++)//��������sqrt������������ͷ�ļ�   #include<math.h>
	{
		if (n%z == 0)
		{
			return 0;
		}
	}
	//Ҫ��2 - n-1��ֵȥ���ſ���
	return 1;
}

int main() 
{
	//��ӡ100-200֮�������
	int i = 0;

	for ( i = 100; i <=200;i++)
	{
		//дis_primeһ�������ж�i�Ƿ�Ϊ������������������򷵻�1����������򷵻�0
		if (is_prime(i) == 1)
		{
			
			printf("%d ", i);

		}
	}
	return 0;
}
*/










/*
//дһ�������ж�һ���ǲ�������

int is_leap_year(int y)//�����귵��1���������귵��0
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
		
}
int main()
{
	int year = 0;
	for ( year = 1000; year <= 2000; year++)
	{
		//�ж�year�Ƿ�Ϊ����
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}
*/










/**/
//дһ��������ʵ��һ��������������Ķ��ֲ���

/*
//����Ϊ����ʾ������������
//���鴫�����������棬����binary_search��������sz��������

                  //������arr��ָ��
int binary_search(int arr[], int k) //����ҵ��ˣ�������������±꣬����Ҳ������� - 1//�βκ�ʵ��������ͬ
{
	//�㷨��ʵ��
	//�ö��ֲ��ҷ�
	int sz = sizeof(arr) / sizeof(arr[0]);
	//64ƽ̨����ϵͳָ���С��8����arr[0]��int������4�����Եõ��ĳ�����2�����������鳤��

	int left = 0;
	int right = sz-1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//ÿ���м�Ԫ���±�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}

	}
		return -1;
}
int main()
{
	//���ֲ���
	//��һ�����������в��Ҿ���ĵ�ĳ����
	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//һ���������
	int k = 7;//��Ҫ���ҵ���
	int ret = binary_search(arr,k);//��arr����k�����ܷ���ֵ����ret
	//����ط����ݹ�ȥ������Ԫ�صĵ�ַ
	
	if (-1 == ret)//����ҵ��ˣ�������������±꣬����Ҳ�������-1
	{
		printf("�Ҳ���ָ��������");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ� %d\n",ret);
	}
	return 0;
}
*/



/*
//��ȷʾ��
//��sz���������

int binary_search(int arr[], int k,int sz) //����ҵ��ˣ�������������±꣬����Ҳ������� - 1//�βκ�ʵ��������ͬ
{
	//�㷨��ʵ��
	//�ö��ֲ��ҷ�
	
	

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//ÿ���м�Ԫ���±�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}

	}
	return -1;
}
int main()
{
	//���ֲ���
	//��һ�����������в��Ҿ���ĵ�ĳ����

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//һ���������
	int k = 7;//��Ҫ���ҵ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);//��arr����k�����ܷ���ֵ����ret��szΪ���鳤��
	//����ط����ݹ�ȥ������Ԫ�صĵ�ַ


	
	if (-1 == ret)//����ҵ��ˣ�������������±꣬����Ҳ�������-1
	{
		printf("�Ҳ���ָ��������");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ� %d\n", ret);
	}
	return 0;
}
*/










/*
//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1
Add(int* p)
{
	(*p)++;//����д��*p++����Ϊ++�����ȼ�����*p���Ի�p++��
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	return 0;
}
*/










/*
//Ƕ�׵���
//��ӡ����hehe
//��������Ƕ�׵��ã����ǲ���Ƕ�׶��塣

#include <stdio.h>
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}
*/










//��ʽ����
//��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
/*
int main()
{
	int len = 0;

	//1   ��ӡ�ַ���abc�ĳ���
	len = strlen("abc");
	printf("%d\n", len); //��ӡ���3

	//2��ӡ�ַ���abc�ĳ���
	printf("%d\n", strlen("abc"));//��ӡ���3

	return 0;
}
*/
/*
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));  //��ӡ���4321
	
	//���ͣ�
	//��Ϊprintf�ķ���ֵ�Ǵ�ӡ����Ļ�ϵĸ���
	//һ��ʼprintf("%d", 43)����Ļ�ϴ�ӡ43����Ϊ��ӡ��������������Ը�printf����ֵ��2����ʱ��Ļ�ϴ�ӡ���43
	//��Ϊprintf("%d", 43)����ֵ��2���Ա��printf("%d", printf("%d", 2));�ٴ�ӡ2������ֵ��1������һ����ʱ��Ļ�ϴ�ӡ���432
	//��Ϊprintf("%d", 2)����ֵ��1���Ա��printf("%d", 1)����ʱ�ٽ���һ����ӡ1����ʱ��Ļ�ϴ�ӡ�����4321
	
	return 0;
}
*/











//����������
//���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ����������������ˡ�
// ����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
// ����������һ��Ҫ����ͷ�ļ��еġ�

//�������壺
//�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ�֡�


/*

//����������ֻ��������֪����û�У���������û�п������Ķ��壩
int Add(int, int);//����д�ɣ�int Add(int x, int y);   �����x��y������ã�ֻ������


int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;

	sum = Add(a, b);//��������  //���δ���к�����������ʱ�ᾯ��Addδ���壬��Ϊ��ʱ�����ǰ����ɨ��δɨ�赽Add��
	
	printf("%d", sum);
	return 0;
}

//��������
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
*/
/*


//�����ĺ����������÷�
//�ȴ���һ��add.h�ļ�����������������add.h�ļ�� ����������һ��Ҫ����ͷ�ļ��еġ���
//�ٴ���add.c�ļ���   ������ʵ�֣�Ҳ���Ǻ����Ķ��壩 
//���Ҫ������һ��ͷ�ļ� #include "add.h"
//Ȼ����ʹ��eg��    sum = add(1, 2);


*/