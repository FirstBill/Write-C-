#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include<string.h>


//函数
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
//strcpy - string copy - 字符串拷贝  //需引用头文件 #include<string.h>
//http://cplusplus.com/ 网址 关于strcpy的格式：  char * strcpy ( char * destination, const char * source );

#include<string.h>
int main()
{
	//strcpy - string copy - 字符串拷贝
	//strlen - string length - 字符串长度

	char arr1[] = "bit";
	char arr2[] = "###########";
	strcpy(arr2, arr1);//将数组arr1的内容拷贝到arr2里面
	printf("%s\n", arr2);//打印拷贝后数组arr2里的内容：bit

	return 0;
 }
 */










/*
//memset
//memory - 内存     set - 设置
//http://cplusplus.com/ 网址 关于memset的格式： void* memset(void* ptr, int value, size_t num);

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//括号里的第一个写第一个元素的地址，第二个写需要设置的值(字符也是有ASCII值，所以也是int，但不能放字符串)，第三个写设置多少个
	printf("%s\n", arr);//打印输出: ***** world

	return 0;
}
*/









/*
//函数的组成：

//ret_type fun_name(para1, *)  //ret_type 返回类型  fun_name 函数名  para1    函数参数
//{
//	statement;//语句项
//}

//eg：
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}


//写一个函数可以找出两个整数中的最大值。

//定义函数
int get_max(int x, int y)
{
	if (x > y)
	{
		return x;//大于y就返回x
	}
	else
	{
		return y;//小于等于就返回y
	}

}

int main()
{
	int a = 10;
	int b = 20;
	//函数的使用
	int max = get_max(a, b);
	printf("max = %d", max);
	return 0;
}
*/










//写一个函数可以交换两个整形变量的内容。
/*
//在主函数里面写（不符合要求）
int main()
{
	int a = 0;
	int b = 20;
	int tmp = 0; //tmp为临时值
	printf("a = %d,b = %d\n", a, b);//打印输出a = 0,b = 20
	tmp = a;
	a = b;
	b = tmp;
	printf("a = %d,b = %d\n",a, b);//打印输出 a = 20, b = 0
	return 0;
}
*/
/*
void Swap1(int x,int y) //void表示空，无返回值  //这个函数有问题不能实现要求
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa,int* pb)//需要运用到指针的知识  //用int* pa和int* pb来接受发来的地址&a和 &b
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
	
	printf("a = %d,b = %d\n", a, b);//打印输出a = 0,b = 20
	
	// Swap1(a, b); //调用上面定义的Swap函数 //这种方法有问题不能实现要求
	
	Swap2(&a, &b);//需要运用到指针的知识

	printf("a = %d,b = %d\n", a, b);//打印输出 a = 20, b = 0
	return 0;
}
*/