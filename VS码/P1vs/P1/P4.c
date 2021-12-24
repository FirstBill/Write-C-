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
	//指针在32位平台的大小为4字节
	//指针在64位平台的大小为8字节
	printf("%d\n", sizeof (char *));//指针在64位平台的大小为8字节
	printf("%d\n", sizeof(short *));//指针在64位平台的大小为8字节
	printf("%d\n", sizeof (int *));//指针在64位平台的大小为8字节
	printf("%d\n", sizeof (double *));//指针在64位平台的大小为8字节
	return 0;
}


int main ()
{
	int a = 10;//4个字节
	int* p = &a;//取地址
	printf("%p\n", &a);
	printf("%p\n",p);
	//有一种变量是用来存放地址的----指针变量
	//printf("%p\n", &a);
	*p = 20;//* ---解引用操作符
	printf("a = %d\n", a); 
	return 0;
}

//#define 定义标识符常量 eg：#define a 100
//#define  可以定义宏--带参数
//函数的定义方式
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
//宏的定义方式
#define MAX(X,Y)(X>Y?X:Y)
int main()
{
	int a = 10;
	int b = 20;
	//函数
	int max = Max(a, b);
	printf("max = %d\n",max);
	//宏的方式
	max = MAX(a, b);
	//max = (a>b?a:b)
	printf("max = %d\n", max);
	return 0;

}


//static 修饰局部变量
//局部变量的生命周期变长
//static 修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法再使用
//static修饰函数
// 也是改变函数的作用域 - 不准确
//static修饰函数改变了函数的链接属性
// 未被static修饰的函数都具备外部链接属性
//外部链接属性 - 要想使用该函数声明一下就可以使用
//被static修饰后 外部链接属性-->内部链接属性
//
//声明外部函数--extern   eg：extern int a
//在同一工程不同源文件下也可使用该变量
//
//
//只要是整数，内存中储存的都是二进制的补码
//正数----原码，反码，补码 相同
//负数（在内存中以 补码 形式存储）：
//     原码           --->        反码         ---->        补码
//（ 直接按照正负写       （原码的符号位不变			  （反码+1）
//   出的二进制序列 ）		其它位按位取反得到）
//   eg:-2
// 10000000000000000000000000000010 --原码
// 11111111111111111111111111111101 --反码
// 11111111111111111111111111111110 --补码


int main()
{
	//条件操作符(三目操作符)
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
	// &-是按位与， |是按位或
	a = 2 & 1;//即10 & 01，结果为00即0
	b = 2 | 1;//即10 | 01，结果为11即3
	printf("%d\n", a);
	printf("%d\n", b);
	// &&是逻辑与，||是逻辑或（结果是真（1）1或者假（0）
	x = 100 && 99;
	z = 100 || 0;
	printf("%d\n", x);//结果为真
	printf("%d\n", z);//结果为真
}



int main()
{

	//保持a的值不变看前置++和后置++的区别

	int a = 10;
	int b = a++;//后置++，先将a赋值给b再a自加1
	printf("a = %d，b = %d\n", a, b);//a = 11,b = 10
	
	a = 10;
	int c = ++a;//前置++，先将a的值加1再赋值给c
	printf("a = %d，c = %d\n", a,c);//a = 11,c = 11
}


int main()
{
	int a = 0;
	int b = ~a;
	// ~--按（2进制）位取反
	printf("%d\n",b);
	return 0;
}


int a(int x,int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
		printf("两个值中较大的值是：%d", z);
		return z;
	}
	if (x < y)
	{
		z = y;
		printf("两个值中较大的值是：%d", z);
		return z;
	}
	if (x = y)
	{	
		printf("两个值相等");
	}
}
int main()
{
	int a1;
	int a2;
	int big = 0;
	printf("请输入需要比大小的两个值：");
		scanf("%d%d", &a1, &a2);
		big = a(a1, a2);
	return 0;
}
