//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//程序如果直接输入EOF还是会输出EOF无法停下来该循环
//	//如果按ctrl + z 就可以停下来
//	//EOF(文件结束标志) - end of file ->（它本质上的值是：） -1
//
//}
//
//
//
////getchar -- 接受键盘上的一个字符
////putchar -- 打印字符
//int main()
//{
//	int ch = getchar();
//	putchar(ch);     //用putchar输出字符
//	printf("%c\n", ch);//用printf输出字符
//	return 0;
//
//}
//
//int main()
//{
//	int i = 1;
//	while (i<10)
//	{
//		i++;
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d\%", i); 
//		//打印12345678910，程序会结束
//		//continue的作用：
//		//（终止本次循环中continue后面的代码）
//		//continue是用于终止本次循环的，也就是循环中continue后边的代码不会再执行，
//		//而是直接跳转到while语句的判断部分。进行下一次循环的入口判断
//			
//	} 
//	int z = 1;  
//	while (z < 10)
//	{
//		if (5 == z)
//		{
//			break;
//			//break的作用：
//			//在循环中只要遇到break，就停止后期所有的循环，直到终止循环。
//			//所以：while中的break是用于永久终止循环的
//		}
//		z++;
//		printf("%d\%", z);
//		//会打印1234，程序会结束
//	}
//}
//
//
////例题，结果是m = 5,n = 3
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{  //switch允许被嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		default:
//			break;
//		}
//	case 4:m++;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//}
//
//
////switch语句
//int main()
//{
//	int day = 0;
//	printf("请用数字输入今天星期几：");
//	scanf("%d", &day);
//	//②
//	switch (day)//switch小括号内必须定义的是整形语句
//	{
//	case 1+0:     //case后面是 整形常量 表达式
//		printf("今天是星期一\n");
//		break;    //break是跳出switch语句的，否则后面语句还会被执行
//	case 2:
//		printf("今天是星期二\n");
//		break;		
//	case 3:
//		printf("今天是星期三\n");
//		break;
//	case 4:
//		printf("今天是星期四\n");
//		break;
//	case 5:
//		printf("今天是星期五\n");
//		break;
//	case 6:
//		printf("今天是星期六\n");
//		break;
//	case 7:
//		printf("今天是星期天\n");
//		break;
//	default: //当输入的不是1-7，也就是执行不到case时执行default
//		printf("输入错误\n");
//		break;
//	}
//
//	//①
//	if (1 == day)
//	{
//		printf("今天是星期一\n");
//	}
//	else if (2 == day)
//	{
//		printf("今天是星期二\n");
//	}
//	else if (3 == day)
//	{
//		printf("今天是星期三\n");
//	}
//	else if (4 == day)
//	{
//		printf("今天是星期四\n");
//	}
//	else if (5 == day)
//	{
//		printf("今天是星期五\n");
//	}
//	else if (6 == day)
//	{
//		printf("今天是星期六\n");
//	}
//	else if (7 == day)
//	{
//		printf("今天是星期天\n");
//	}else
// 	{
//		printf("输入错误\n");
//	}
//	return 0;
//}
//
//
////练习：
////1.判断一个数是否为奇数
////2.输出1-100之间的奇数
//int main()
//{
//	//③
//	int y = 1;
//	while (y<=100)
//	{
//		printf("%d ", y);
//			y += 2;
//	}
//
//	//②
//	int z = 1;
//	while (z<=100)
//	{
//		if (z % 2 == 1)
//		{
//			printf("%d ", z);
//			
//		}
//		z++;
//	}
//
//	//①
//	int i = 0;
//	int x;
//	
// 	while(i < 100)
//	{
//		x = i % 2;
//		if (x > 0 )
//		{
//			printf("%d\n", i);
//			i++;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	//书写格式优化
//	int num = 4;
//	if (num = 5)
//	{
//		printf("呵呵\n");
//	}
//	//当把==(等于)写成=（赋值时），不会报错
//	//但是执行结果是打印 呵呵
//	//所以推荐下面这种书写格式
//	int num = 4;
//	if (5 == num)
//	{
//		printf("呵呵\n");
//	}
//	//这样即使少写了一个=，程序就会编译不了
//
//	return 0;
//
//}
//
//
//
//
//int main()
//{
//	//悬空else
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//			printf("haha\n");
//	return 0;
//	//因为else与离它最近的未匹配的if匹配所以else与第二个if匹配
//	//因为 a = 0所以未进入后面的if语句中
//	//结果是没有输出任何内容
//  //加{}可以很好的解决这些问题
//}
//
////if语句
//int main()
//{
//	int age = 10;
//
//	//③
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 50 && age < 90)
//	{
//		printf("老年\n");
//	}
//	else 
//	{
//		printf("老不死\n");
//	}
//	//②
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		printf("成年\n");
//	
//	}
//	//①
//	if (age < 18)
//	printf("未成年\n");
//
//	return 0;
//   
//}
