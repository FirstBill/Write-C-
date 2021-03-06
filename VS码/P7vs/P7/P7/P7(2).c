//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include<stdlib.h>
/*由于敲代码时不断从上往下敲，所以建议从下往上观看*/



/*
//练习4：
//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。
//以下以密码为123456为例
int main()
{
	int i = 0;
	char password[20] = {0};//存密码用的数组
	for ( i = 0; i < 3; i++)//三次输入机会
	{
		printf("请输入密码：");
		scanf("%s", password);//输入密码存放到数组password里

		//if(password == "123456")    // 注意：等号（==）不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp

		if(strcmp(password,"123456") == 0) //strcmp用的是依然是#include <stdio.h>头文件。 
			                               //strcmp函数：
											//strcmp(password,"123456")比较password与123456是否相等，若相等则返回0，若第一个大于第二个则返回大于0的数，若第一个小于第二个则返回小于0的数
											//如果相等则返回0 ，因为0 == 0，所以会进入if语句内
		{
			printf("登录成功\n");
			break;//输入成功则跳出循环
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误，退出程序\n");
	}
	return 0;
}
*/


/*
//练习4：
//编写代码，演示多个字符从两端移动，向中间汇聚。
//eg：显示--> welcome to!!!!!
//			  ###############
//			  w#############!
//			  we###########!!
//			  wel#########!!!
//				    ...
//				    ...
//				    ...
//			   welcome to!!!!!

int main()
{
	char arr1[] = { "welcome to!!!!!" };
	char arr2[] = { "###############" };
	int left = 0;//左下角标为0
	          //int right = sizeof(arr1) / sizeof(arr1[0]) - 1;//（×）这样子求得的数组下标是\0的数组下标
													//举例：
													//char arr[] = {"a b c"};
													//其存放的是{ a b c \0}
													//角标为      0 1 2  3
													//想要求c的角标：sizeof(arr) / sizeof(arr[0]) - 2
													//sizeof(arr) / sizeof(arr[0]) - 1  求得的是\0的角标
	//求右下角角标方法一：
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//右下角角标
	//求右下角角标方法二（用strlen函数：用于求字符串长度，遇到\0就停止了，其个数里面没有包含\0）：
	int right = strlen(arr1) - 1;

	while (left<=right)//循环条件：左下角角标小于等于右下角角标，也就是挪完arr中间那最后一个元素之后不再循环
	{
		//将arr1的元素赋给arr2
		arr2[left] = arr1[left];  //这两条语句实现###############变成下面注释那行
		arr2[right] = arr1[right];//			  w#############!
		

		printf(" %s\n", arr2);
		//打印一次休息一秒
		Sleep(1000); //需要引用#include <windows.h>
		system("cls");//system是执行系统命令的一个函数   cls是清空屏幕的指令   需引用头文件 #include<stdlib.h> //最后一次会清屏，解决方法：可以在函数最后再输出打印一次welcome to!!!!!

		left++;//这两条语句是让其不断向中间靠拢
		right--;
	}
	                                                                                                                          //解决方法可以再在这一行输出打印一次welcome to!!!!!
	return 0;
}
*/


/*
		//练习3：
		//在一个有序数组中查找具体的某个数字n
		// eg：比如找7
//(题目)//可能是下面这种顺序里找
		// 1 2 3 4 5 6 7 8  9 10
		//也可能是下面这种顺序里找
		// 1 2 3 4 5 6 8 9 10 11

 
//折半查找算法（二分查找算法）：使用该方法最多查找log2n次（log2n的意思是log以2为的n次，由于2不能输入在右下角所以打成了2n）
//查找一个数组中n个元素的其中一个，如果遍历则最多要查找n次，用折半查找算法（二分查找算法）使用该方法最多查找log2n次
//eg：在 1 2 3 4 5 6 7 8 9 10中找到7，使用折半查找算法（二分查找算法）
//首先找到中间元素5，判断5和7谁大
//如果5小于7则从查找6 7 8 9 10 中去找7
//如果5大于7则从查找0 1 2 3 4 5 中去找7
//显然5小于7所以从查找6 7 8 9 10 中去找7
//则 6 7 8 9 10 是新区间的一组数
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//数组角标   0 1 2 3 4 5 6 7 8  9  -->0是刚开始这个区间的数组左下角角标，9是刚开始这个区间的数组右下角角标
	int k = 7;//在该数组中找到7
	int sz = sizeof(arr) / sizeof(arr[0]);//sz为元素个数
	int left = 0; //数组左下角标
	int right = sz - 1; //数组右下角标

	while (left<=right)//循环条件左下角标小于等于右下角标,则可以不断缩小新的区间
	{

		int mid = (left + right) / 2; //找出中间角标值
		if (arr[mid] > k)//arr[mid]是中间元素角标对应数组的那个元素，if（arr[mid]>k）是判断假如中间元素大于要找的值k
		{
			right = mid - 1;//新区间数组左下角标不变，新区间数组右下角标变为mid-1则缩短一半查找区间
		}
		else if (arr[mid] < k)//arr[mid]是中间元素角标对应数组的那个元素，if（arr[mid]<k）是判断假如中间元素小于要找的值k
		{
			left = mid + 1;//新区间数组右下角标不变，新区间数组左下角标变为mid+1则缩短一半查找区间
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}	
	if (left>right)//如果左下角标大于右下脚标，则找不到了
	{
		printf("找不到了");
	}
	return 0;
}

	int main()//未使用折半查找算法：
	{
		int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
		     //角标   0   1   2   3   4   5   6   7   8   9
	//用下方定义sz表示0   1   2   3   4   5   6   7 sz-1  sz
		int k = 7;
		//写一个代码，在arr数组（有序的）中找到7
		int i = 0;
		int sz = sizeof(arr) / sizeof(arr[0]);//通过数组的总长度➗数组单个元素长度（第一个元素的长度）得到元素总个数赋给sz
		for (i = 0; i < sz; i++)
		{
			if (k ==arr[i])//通过数组内的每一个元素与k的值对比，如果相等则执行if语句内的语句，如果不相等则查看数组内下一个元素
			{
				printf("找到了，下标是：%d \n",i);
				break;
			}
		}
		if (i == sz)//上面for循环中数组最大的下标是从0开始到sz-1，也就是i的值，当遍历所有数组之后还没找到，此时i++，i的值由sz-1变成sz了，跳出循环，则i的值就是sz了
		{
			printf("找不到\n");
		}
		return 0;
	}
*/



/*
//练习2：
//计算:1! + 2！ +···+ 9! + 10! 

//优化后
int main()
{
int i = 0;
int n = 0;
int ret = 1;
int sum = 0;
for (n = 1; n <= 10; n++)
{
	ret = ret * n;//循环第一次是1*1    第二次是1*2  第三次是2*3  第四次是3*4
	sum = sum + ret;
}
	printf("sum = %d\n", sum);
	return 0;
}

//int main()//优化前
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1; 
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)//用于计算阶乘
//		{
//			ret = ret * i;
//		}
//		   
//		sum = sum + ret;//将计算的阶乘相加
//	}
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}
*/


/*
//练习1：
//计算n的阶乘(不考虑溢出的情况)

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1; //ret初始值不能为 0
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d\n", ret);
	return 0;
}

//失败品（未完成）
//int main()
//{
//	int x = 3;//输入的数
//	int y = 0;
//	int z = 0;//结果
//	scanf("%d", &x);//获得输入的数3
//	
//	while (x != 0)
//	{
//		y = x--;      //y 3 2
//		z = x * y;    //x 2 1
//					  //z 6 2
//	}
//	printf("阶乘是: %d ", z);
//}
*/


/*
//用do···while打印1-10
int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i<=10);

	return 0;
}
*/

/*
//下面这个循环执行了多少次？
//答：0次
//因为判断那里k = 0，所以那个位置为假，所以不执行该循环
int main()
{
	int i = 0;
	int k = 0;
	//                  这个位置为假
	for ( i = 0, k = 0;    k = 0     ; k++,i++)
	{
		k++;
		printf("1");
	}
	return 0;
}
*/



/*
//for循环变种②：
int main()
{
	int x, y;
	for (x = 0,y = 0; x < 2 && y < 5; ++x , y++)
	{
		printf("呵呵 ");//结果打印输出两个呵呵
	}
	return 0;
}
*/



/*
//如果不是非常熟练，不要随意省略！！！

//省略前
int main()
{
	int i = 0;
	int j = 0;
	for (i= 0;i<10 ;i++ )
	{
		for (j = 0; j < 10;j++)
		{
			printf("呵呵\n");//会打印100个呵呵
		}
	}
}

//省略后
int main()
{
	int i = 0;
	int j = 0;
	for (;i<10 ;i++ )
	{
		for (; j < 10;j++)
		{
			printf("呵呵\n");//会打印10个呵呵
		}
	}
}
// 省略后为什么打印10个呵呵的解释：
//因为一开始i = 0，j = 0，当执行到内层for时j由0变成10，此时打印0到9，因为j = 10所以跳出内层循环执行i++当 i = 2 时此时的j是在外层被定义的并未销毁，所以j = 10
// 因此后面执行不到内层的for循环，所以才打印10个呵呵
// 省略前为什么打印100个呵呵的解释：
// 同理，因为内层for循环中未省略j = 0所以外层for每执行一次进入到内层for中都会打印10个呵呵，又因为外层for被执行10次，所以打印100个呵呵
*/


/*
//for循环变种①（下面方法执行结果为死循环：不断打印输出呵呵）：
//for循环的初始化、判断、调整 都可以省略
//但是：for循环的判断部分如果被省略，那判断条件就是：恒为增
int main()
{
	for (; ; )
	{
		printf("呵呵\n");
	}
}
*/

/*
//for循环注意②，建议书写：
//建议for语句的循环控制变量的取值采用"前闭后开区间"写法
//前闭后开区间:前面是闭区间，后边是开区间 如：(i = 0; i < 10; i++)中的区间就是 i>=0 && i<10  --->  (i大于等于0并且小于10 )
//这样子写的优点：
//后面的那个10具有某种意义 
//10次循环
//10次打印
//10个元素
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
*/

/*
//for循环注意①：下面代码会发生死循环
//不可在for循环体内修改循环变量，防止for循环失去控制
int main()
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		i = 5;
		printf("呵呵\n ");
	}
	return 0;
}
*/




/*
for循环 解决 while循环的死循环实例
//for循环格式:
// for (表达式1; 表达式2; 表达式3)
// 循环语句;
int main()
{
	int i = 0;
	//  初始化   判断   调整
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			//break;//跳出循环用
			continue;
		printf("%d ", i);//结果输出1 2 3 4 6 7 8 9 10
	}
	//for循环执行流程
	//先初始化，再判断，再打印输出，再调整，再判断
	return 0;
}
*/


/*
//while循环（死循环例子）：
//这个while循环实例会死循环，但用上面的for循环却不会
//因为判断i == 5后continue已经跳出该次循环，无法执行后面i++的调整语句了
//i++无法被执行，i的值一直无法改变，导致i一直是5，一直小于10，所以一直循环，形成死循环
int main()
{
	int i = 1;//初始化

	while (i<=10)//判断
	{
		if (i == 5)
		{
			continue;			
		}
		printf("%d ", i);//结果输出1 2 3 4 死循环了
		i++;//调整
	}

	return 0;
}
*/


/*
//只接收数字字符
int main()
{
	int ch = 0;
	while ( (ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}
*/


/*
//举例讲解最下面那个main里面那样子写的作用
int main()
{
	int ch = 0;
	int ret = 0;//定义ret用来接收Y/S
	char password[20] = { 0 };//定义一个长度为20的数组
	printf("请输入密码：>");
	scanf("%s", password);//输入密码，并存放再password数组里
	//缓冲区还剩余一个'\n',因为输入完密码按了一下回车也就是Enter（\n），在ASCII里其十进制是10
	//读取一下'\n',将缓存区的\n读走
	while ( (ch = getchar() != '\n'))
	{
		;
	}
	printf("请确认（Y/S）:>");
	ret = getchar();//  Y/S
	if(ret == 'Y')
	{
		printf("确认成功\n");
	}
		else
	{
		printf("放弃确认\n");
	}
	return 0;
}
*/

/*
int main()
{
	
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//程序如果直接输入EOF还是会输出EOF无法停下来该循环
	//如果按ctrl + z 就可以停下来
	//EOF(文件结束标志) - end of file ->（它本质上的值是：） -1

}*/