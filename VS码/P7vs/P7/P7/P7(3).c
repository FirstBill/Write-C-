#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include<stdlib.h>
#include<math.h> //数学库函数
#include<time.h>

/*从上往下看*/




/*
//写代码将三个数按从大到小输出
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d",&a,&b,&c);
	//a b c
	//中间算法实现a中放最大值，b次之，c中放最小值
	if (a < b)
	{
		int tmp = a;//创建个临时变量tmp
		a = b;
		b = tmp;

	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;

	}

	printf("%d %d %d", a, b, c);

	return 0;
}
*/










/*
//写代码打印1-100之间3的倍数
int main()
{
	int i = 0;
	for (i = 1;i <= 100; i++)
	{
		if (i%3 == 0)
		{
			printf("%d ", i);

		}

	}
	return 0;
}
*/










/*
//给定两个数，求这两个数的最大公约数
int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf("%d%d", & m, & n);
	while (r = m % n)
	{
		//r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);

	return 0;
}
*/










//打印1000年到2000年之间的闰年
/*
//方法①
int main()
{
	int year = 0;
	int count = 0;//统计个数
	for (year = 1000 ; year<= 2000; year++)
	{
		//判断year是否为闰年
		//1.能被4整除不能被100整除是闰年
		//2.能被400整除是闰年
		
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);//无法打印1600
			count++;

		}
		else if (year%400 == 0)
		{
			printf("%d ", year);
			count++;
		}

	}
	printf("\n count = %d", count);
	return 0;
}
*/
/*
//方法②
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
		}
	}

	
	printf("%d ", year);
	return 0;
}
*/










//打印100到200之间的素数
/*
//未优化
int main()
{
	int i = 0;
	int count = 0;
	for ( i = 100; i <=200; i++)
	{
		//判断i是否为素数
		//素数判断
		//1.试除法（只能被1和它本身整除）
		//产生2到i-1的数（判断它们能不能被整除）
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		//有两种可能
		//1.因为整个循环循环完，跳出循环到此位置----此时该数为素数
		//2.找到数进入了for循环内的if语句内部break了----此时该数不为素数
		//因此在此设置if语句if (j == i)
		if (j == i)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n count = %d ",count);
	return 0;
}
*/
/*
//优化1
//如果i能写成i = a * b 的形式，则a和b中至少有一个数字小于等于开平方的i
//找一半就好
int main()
{
	int i = 0;
	int count = 0;
	//sqrt -- 开平方的数学库函数 需要引用 #include<math.h> //数学库函数
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//素数判断
		//1.试除法（只能被1和它本身整除）
		//产生 2 到 开平方的i 的数（判断它们能不能被整除）
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//修改处
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//有两种可能
		//1.因为整个循环循环完，跳出循环到此位置----此时该数为素数
		//2.找到数进入了for循环内的if语句内部break了----此时该数不为素数
		//因此在此设置if语句if (j == i)
		if (j > sqrt(i))//修改处
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n count = %d ", count);
	return 0;
}
*/
/*
//优化2
//因为偶数不可能是素数，所以直接在奇数里找素数
int main()
{
	int i = 0;
	int count = 0;
	//sqrt -- 开平方的数学库函数 需要引用 #include<math.h> //数学库函数
	for (i = 101; i <= 200; i+=2)//进一步修改处：因为100为偶数所以改为101，循环后i每次+2所以i都是奇数
	{
		//判断i是否为素数
		//素数判断
		//1.试除法（只能被1和它本身整除）
		//产生 2 到 开平方的i 的数（判断它们能不能被整除）
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		//有两种可能
		//1.因为整个循环循环完，跳出循环到此位置----此时该数为素数
		//2.找到数进入了for循环内的if语句内部break了----此时该数不为素数
		//因此在此设置if语句if (j == i)
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n count = %d ", count);
	return 0;
}
*/










/*
//编写程序数一下1-100的所有整数中出现多少个含9的整数，并打印输出
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i%10 == 9)//个位是9的整数
		{
			count++;
			printf("%d ", i);
		}
		else  if (i/10 == 9)//十位是9的整数
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("count = %d\n", count);
	return 0;

}
*/











/*
//分数求和
// 1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//方法一：
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	//先实现全加1/1+1/2+1/3+1/4+1/5 …… + 1/99  +  1/100
	//再实现一正一负的计算：  用flag
	for (i = 1; i <=100; i++)
	{
		sum += flag*1.0 / i; //写1.0的原因是： 1/1 + 1/2 + 1/3 +...+  1/100 = 1 +  0  +  0  +... +   1    =1结果是1，计算不会取小数点后面的数，写成1.0就会将sum变成浮点数
		flag = -flag;

	}
	
	printf("%lf\n", sum);
	return 0;
}
//方法二：将分母为奇数的所有值相加，分母为偶数的所有值相加，再做差
*/










/*
//求10个整数的最大值
int main()
{

	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
		for ( i = 0; i < sz; i++)
		{
			if ( arr[i] >max)
			{
				max = arr[i];

			}
			printf("max = %d\n", max);
			return 0;
		}
	return 0;
}
*/










/*
//在屏幕上输出9*9乘法口诀表
//1 * 1 = 1
//2 * 1 = 2  2 * 2 = 4
//3 * 1 = 3  3 * 2 = 6   3 * 3 = 9
//.........
int main()
{
	int i = 0;
	//确定打印9行
	for ( i = 1; i <=9; i++)
	{
		//打印一行
		int j = 1;
		for (j = 1; j<=i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//后面有解释%-2d：打印两位且左对齐

		}
		printf("\n");
	}
	return 0;
}
//%d打印输出结果（不足第三列开始歪歪的，由于i*j结果一位就打印一位，结果俩位就打印俩位）
// 用%2d是打印两位，如果结果是一位，打印两位是右对齐
// %d打印输出结果：
// 1*1=1
//2 * 1 = 2 2 * 2 = 4
//3 * 1 = 3 3 * 2 = 6 3 * 3 = 9               
//4 * 1 = 4 4 * 2 = 8 4 * 3 = 12 4 * 4 = 16
//5 * 1 = 5 5 * 2 = 10 5 * 3 = 15 5 * 4 = 20 5 * 5 = 25
//6 * 1 = 6 6 * 2 = 12 6 * 3 = 18 6 * 4 = 24 6 * 5 = 30 6 * 6 = 36
//7 * 1 = 7 7 * 2 = 14 7 * 3 = 21 7 * 4 = 28 7 * 5 = 35 7 * 6 = 42 7 * 7 = 49
//8 * 1 = 8 8 * 2 = 16 8 * 3 = 24 8 * 4 = 32 8 * 5 = 40 8 * 6 = 48 8 * 7 = 56 8 * 8 = 64
//9 * 1 = 9 9 * 2 = 18 9 * 3 = 27 9 * 4 = 36 9 * 5 = 45 9 * 6 = 54 9 * 7 = 63 9 * 8 = 72 9 * 9 = 81
// %2d（打印两位，右对齐）打印输出结果：
//1 * 1 = 1
//2 * 1 = 2 2 * 2 =  4
//3 * 1 = 3 3 * 2 =  6 3 * 3 =  9
//4 * 1 = 4 4 * 2 =  8 4 * 3 = 12 4 * 4 = 16
//5 * 1 = 5 5 * 2 = 10 5 * 3 = 15 5 * 4 = 20 5 * 5 = 25
//6 * 1 = 6 6 * 2 = 12 6 * 3 = 18 6 * 4 = 24 6 * 5 = 30 6 * 6 = 36
//7 * 1 = 7 7 * 2 = 14 7 * 3 = 21 7 * 4 = 28 7 * 5 = 35 7 * 6 = 42 7 * 7 = 49
//8 * 1 = 8 8 * 2 = 16 8 * 3 = 24 8 * 4 = 32 8 * 5 = 40 8 * 6 = 48 8 * 7 = 56 8 * 8 = 64
//9 * 1 = 9 9 * 2 = 18 9 * 3 = 27 9 * 4 = 36 9 * 5 = 45 9 * 6 = 54 9 * 7 = 63 9 * 8 = 72 9 * 9 = 81
//%-2d打印输出结果（输出结果左对齐）：
//1 * 1 = 1
//2 * 1 = 2  2 * 2 = 4
//3 * 1 = 3  3 * 2 = 6  3 * 3 = 9
//4 * 1 = 4  4 * 2 = 8  4 * 3 = 12 4 * 4 = 16
//5 * 1 = 5  5 * 2 = 10 5 * 3 = 15 5 * 4 = 20 5 * 5 = 25
//6 * 1 = 6  6 * 2 = 12 6 * 3 = 18 6 * 4 = 24 6 * 5 = 30 6 * 6 = 36
//7 * 1 = 7  7 * 2 = 14 7 * 3 = 21 7 * 4 = 28 7 * 5 = 35 7 * 6 = 42 7 * 7 = 49
//8 * 1 = 8  8 * 2 = 16 8 * 3 = 24 8 * 4 = 32 8 * 5 = 40 8 * 6 = 48 8 * 7 = 56 8 * 8 = 64
//9 * 1 = 9  9 * 2 = 18 9 * 3 = 27 9 * 4 = 36 9 * 5 = 45 9 * 6 = 54 9 * 7 = 63 9 * 8 = 72 9 * 9 = 81
*/










/*
//猜数字
//电脑生成一个随机数
//猜数字
//可玩多把
void menu()
{
	printf("*****************************\n");
	printf("******  1.play  2.exit  *****\n");
	printf("*****************************\n");
}
void game()
{
	int guess = 0;//接受猜的数字

	//使用rand函数前要用srand随机数生成器
	//拿时间戳来设置随机数的起点，时间戳要用time函数
	// 调用时间戳在main函数内，调用一次就好,放在game（）里面频繁设置随机数初始值，会让随机数初始值相近
	//srand();//（）内的是时间戳：当前计算机的时间-计算机的起始时间（1920年1月1日0时0分0秒）秒
	
	//1.生成随机数  用 rand（）函数；  需引用#include<stdlib.h>
	// 用该函数   rand（）函数 前要用srand函数
	// RAND_MAX函数在0-32767之间

	int ret = rand()%100+1;//生成1-100的数字
	//printf("%d\n", ret);//不能打印生成的随机数，要不然就没办法进行游戏

	//2.猜数字
	while (1)
	{
		printf("猜数字:");
		scanf("%d", &guess);
			if (guess > ret)
			{
				printf("猜大了!\n");
			}
			else if (guess < ret)
			{
				printf("猜小了!\n");
			}
			else
			{
				printf("恭喜猜对了!");
				break;
			}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//调用时间戳，设置随机数初始值   需要#include<time.h>
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input != 2);
	return 0;

}
*/










/*
//goto语句
//C语言中提供了可以随意滥用的 goto语句和标记跳转的标号。
//从理论上 goto语句是没有必要的，实践中没有goto语句也可以很容易的写出代码。
//但是某些场合下goto语句还是用得着的，最常见的用法就是终止程序在某些深度嵌套的结构的处理过
//程。
//例如：一次跳出两层或多层循环。
//多层循环这种情况使用break是达不到目的的。它只能从最内层循环退出到上一层的循环。
//goto语言真正适合的场景如下(如果想跳出去处理错误情况，此时要跳出三个for循环要用起码三个break，但用goto就很便捷)：
//	for (...)
//		for (...)
//		{
//			for (...)
//			{
//				if (disaster)
//					goto error;
//			}
//		}
//	…
//		error :
//	if (disaster)
		// 处理错误情况
*/
/*
//使用goto语句写的一个关机程序
int main()
{
	char input[10] = { 0 };//接受输入的数

	//shutdown -s  关机命令。shutdown -s -t 60   设置时间关机，后面的数字单位秒。shutdown -a  是取消关机的命令
	//system（） 是执行系统命令的  需引用#include<stdlib.h>
	system("shutdown -s -t 60");
again:
	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))//比较两个字符串用strcmp（）函数  需引用#include <string.h>
	{
		system("shutdown -a");
	}
	else
	{
		goto again;//goto语句，再给用户输入机会，一分钟内不断给机会，直到一分钟耗完
	}
	return 0;
}
*/
/*
//不使用goto语句写的一个关机程序
int main()
{
	char input[10] = { 0 };//接受输入的数

	//shutdown -s  关机命令。shutdown -s -t 60   设置时间关机，后面的数字单位秒。shutdown -a  是取消关机的命令
	//system（） 是执行系统命令的  需引用#include<stdlib.h>
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
		scanf("%s", input);
		if (0 == strcmp(input, "我是猪"))//比较两个字符串用strcmp（）函数  需引用#include <string.h>
		{
			system("shutdown -a");
			break;
		}
	}
	
	
	return 0;
}
*/



