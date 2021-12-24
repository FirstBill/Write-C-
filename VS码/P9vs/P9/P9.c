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
//当实参传给形参的时候
//形参其实是实参的一份零时拷贝
//对形参的修改是不会改变实参的
//所以Swap1达不到换值到实参的效果
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
	
	// Swap1(a, b); //调用上面定义的Swap1函数 //这种方法有问题不能实现要求
	
	Swap2(&a, &b);//调用上面定义的Swap2函数  //需要运用到指针的知识

	printf("a = %d,b = %d\n", a, b);//打印输出 a = 20, b = 0
	return 0;
}
*/










/*
//函数的参数：

//1.实际参数（实参）：
//真实传给函数的参数，叫实参。
//实参可以是：常量、变量、表达式、函数等。
//无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参。

//2.形式参数（形参）：
//形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内
//存单
//元），所以叫形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有
//效。



//函数的调用：

//1.传值调用
//函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。

//2.传址调用
//传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操
//作函数外部的变量。
*/










/*
//写一个函数可以判断一个数是不是素数

#include<math.h>

int is_prime(int n)//如果是素数，则返回1，如果不是则返回0（也就是除了1和它本身以外还有别的数能整除它）
                   
{
	int z = 2;
	for ( z = 2; z <= sqrt(n); z++)//开跟函数sqrt（），需引用头文件   #include<math.h>
	{
		if (n%z == 0)
		{
			return 0;
		}
	}
	//要拿2 - n-1的值去除才可以
	return 1;
}

int main() 
{
	//打印100-200之间的素数
	int i = 0;

	for ( i = 100; i <=200;i++)
	{
		//写is_prime一个函数判断i是否为素数，如果是素数，则返回1，如果不是则返回0
		if (is_prime(i) == 1)
		{
			
			printf("%d ", i);

		}
	}
	return 0;
}
*/










/*
//写一个函数判断一年是不是闰年

int is_leap_year(int y)//是闰年返回1，不是闰年返回0
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
		//判断year是否为闰年
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}
*/










/**/
//写一个函数，实现一个整形有序数组的二分查找

/*
//以下为错误示例！！！！！
//数组传不进函数里面，导致binary_search（）里面sz计算有误

                  //本质上arr是指针
int binary_search(int arr[], int k) //如果找到了，返回这个数的下标，如果找不到返回 - 1//形参和实参名字相同
{
	//算法的实现
	//用二分查找法
	int sz = sizeof(arr) / sizeof(arr[0]);
	//64平台操作系统指针大小是8，而arr[0]是int所以是4，所以得到的长度是2，并不是数组长度

	int left = 0;
	int right = sz-1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//每次中间元素下标
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
	//二分查找
	//在一个有序数组中查找具体的的某个数
	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//一组有序的数
	int k = 7;//需要查找的数
	int ret = binary_search(arr,k);//在arr里找k，接受返回值放入ret
	//这个地方传递过去的是首元素的地址
	
	if (-1 == ret)//如果找到了，返回这个数的下标，如果找不到返回-1
	{
		printf("找不到指定的数字");
	}
	else
	{
		printf("找到了，下标是： %d\n",ret);
	}
	return 0;
}
*/



/*
//正确示例
//将sz在外面计算

int binary_search(int arr[], int k,int sz) //如果找到了，返回这个数的下标，如果找不到返回 - 1//形参和实参名字相同
{
	//算法的实现
	//用二分查找法
	
	

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//每次中间元素下标
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
	//二分查找
	//在一个有序数组中查找具体的的某个数

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//一组有序的数
	int k = 7;//需要查找的数
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);//在arr里找k，接受返回值放入ret，sz为数组长度
	//这个地方传递过去的是首元素的地址


	
	if (-1 == ret)//如果找到了，返回这个数的下标，如果找不到返回-1
	{
		printf("找不到指定的数字");
	}
	else
	{
		printf("找到了，下标是： %d\n", ret);
	}
	return 0;
}
*/










/*
//写一个函数，每调用一次这个函数，就会将 num 的值增加1
Add(int* p)
{
	(*p)++;//不能写成*p++，因为++的优先级大于*p所以会p++先
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
//嵌套调用
//打印三个hehe
//函数可以嵌套调用，但是不能嵌套定义。

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










//链式访问
//把一个函数的返回值作为另外一个函数的参数
/*
int main()
{
	int len = 0;

	//1   打印字符串abc的长度
	len = strlen("abc");
	printf("%d\n", len); //打印输出3

	//2打印字符串abc的长度
	printf("%d\n", strlen("abc"));//打印输出3

	return 0;
}
*/
/*
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));  //打印输出4321
	
	//解释：
	//因为printf的返回值是打印在屏幕上的个数
	//一开始printf("%d", 43)在屏幕上打印43，因为打印输出两个数，所以该printf返回值是2。此时屏幕上打印输出43
	//因为printf("%d", 43)返回值是2所以变成printf("%d", printf("%d", 2));再打印2，返回值是1。接上一步此时屏幕上打印输出432
	//因为printf("%d", 2)返回值是1所以变成printf("%d", 1)，此时再接上一步打印1，此时屏幕上打印输出是4321
	
	return 0;
}
*/











//函数声明：
//告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，函数声明决定不了。
// 函数的声明一般出现在函数的使用之前。要满足先声明后使用。
// 函数的声明一般要放在头文件中的。

//函数定义：
//函数的定义是指函数的具体实现，交待函数的功能实现。


/*

//函数声明（只声明，不知道有没有，真正的有没有看函数的定义）
int Add(int, int);//或者写成：int Add(int x, int y);   这里的x和y不会调用，只是声明


int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;

	sum = Add(a, b);//函数调用  //如果未进行函数声明，此时会警告Add未定义，因为此时代码从前往后扫描未扫描到Add。
	
	printf("%d", sum);
	return 0;
}

//函数定义
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
*/
/*


//正经的函数声明的用法
//先创建一个add.h文件，将函数声明放在add.h文件里（ 函数的声明一般要放在头文件中的。）
//再创建add.c文件放   函数的实现（也就是函数的定义） 
//如果要用引用一下头文件 #include "add.h"
//然后再使用eg：    sum = add(1, 2);


*/