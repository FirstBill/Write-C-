#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>




int main()
{
	//单目操作符 ！ -（负号) sizeof  ++ --
	//双目操作符 =  +（加号）
	//三木操作符 
	int i = 0;
	int a [3] = { 1,2,3 };
	printf("数组a的大小为：%d 字节\n", sizeof(a));
	i = sizeof(a) / sizeof(a[0]);
	printf("数组a的元素个数为：%d 个\n", i);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);

}

int main()
{
	//(2进制)位操作
	//  &-按位与
	//  |-按位或
	//  ^-按位异或：对应的二进制位相同，则为0.对应的二进制位不相同，则为1
	int a = 3;			//a二进制：011 十进制：3

	int b = 5;			//b二进制：101 十进制：5


	int c = a & b;		//c二进制：001 十进制：1
	printf("&-按位与运算结果:%d\n", c);


	int d = a | b;		//d二进制：111 十进制：7
	printf("|-按位或运算结果:%d\n", d);


	int e = a ^ b;      //e二进制：110 十进制：6
	printf("^-按位异或运算结果:%d\n", e);

}

int main()
{
	//移（2进制）位操作符
	//  <<左移
	//  >>右移
	int a = 1;
	printf("移位前a的值：%d\n", a);
	//整形1占4个字节-32bit位
	// 移位前
	//00000000000000000000000000000001
	int b = a << 1;
	//移位后
	//00000000000000000000000000000010
	printf("移位后a的值：%d\n", a); //a还是1，a未变
	printf("移位后b的值：%d\n",b);





	int x = 5 / 2;
	int y = 5 % 2;//取模
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

int a(int b, int c)//函数a
{
	int d = b + c; //作用即求和
	return d;      //返回d即求和结果
}
 int main()
{
	int num1 = 20;
	int num2 = 100;
	int sum = 0;
	// sum = num1 + num2;
	sum = a(num1, num2);//调用函数a
	 printf("sum = %d\n",sum);
	 return 0;
}

int main()
{
	int line = 0;
	printf("加入比特\n");

	while (line<2000)
	{
		printf("敲一行代码: %d\n",line);
		line++;
	}
	if (line >= 2000)
	
		printf("拿到好0ffer\n");
	
	


	return 0;

}

int main()
{
	int input = 0;
	printf("加入\n");
	printf("你要好好学习吗？1 or 0 --> :");
	scanf("%d",&input);
	if (input == 1)
	{
		printf("好offer\n");
	}
	else
	{
		printf("卖红薯\n");
	}
	return 0;
}

int main() 
{
	printf("%s\n", "c:\test\32\test.c");


	//   \ddd----ddd表示1-3个八进制的数字。如\130
	printf("%c\n", '\32');
	// \32 -- 32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ascii码值，对应的字符
	//32 --> 10进制 26 ->作为ascii码值代表的字符
	printf("%c\n", '\132');
	// \132中八进制132转化为十进制为90，其代表大写的z即z
	//注：八进制有不能>=8的数

	//   \xdd----dd表示2个十六进制的数字。如\x30

	printf("%d\n", strlen("c:\test\32\test.c"));


	//
	
	return 0;
}

int main()
{
	char arr1[] = "abc";//数组//"abc"--'a' 'b' 'c' '\0'--'\0'字符串的结束标志
	
	char arr2[] = { 'a','b','c' };//因为没有\0,所以后面会打印乱码“烫烫烫.....”，放0也可以，因为ASCII的\0的十进制是0
	char arr3[] = { 'a','b','c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	 //需要引用#include <string.h>
	printf("% d\n", strlen(arr1));//数组1的长度
	printf("% d\n", strlen(arr2));//数组2的长度，因为没有\0所以直到遇到随机数为\0才结束
	printf("% d\n", strlen(arr3));//数组3的长度

	return 0;


}

//枚举常量
//枚举关键--enum
enum sanyuanse
{
	RED,        //0
	YELLOW,     //1
	BLUE        //2
};
int main()
{
	enum sanyuanse a = BLUE;
	printf("%d\n",a);//输出2
	return 0;

}