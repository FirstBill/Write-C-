#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据--使用scanf
    scanf("%d%d",&num1,&num2);//取地址符号&
	
	
	//int sum = 0;//C语言语法规定，变量要定义在当前代码块的最前面
	 sum = num1 + num2;
	 printf("sum = %d\n",sum);
	 return 0;
}



int a = 100;
int main()

{

	int a = 1;
	//局部变量和全局变量的名字建议不要相同容易产生bug
	//当局部变量和全局变量的名字相同的时候，局部变量优先
	printf("%d\n", a);

	return 0;

}


int num2 = 100;//全局变量--定义在代码块外部
int main() 
{
	int num1 = 10;//局部变量--定义在代码块内部
	return 0;


}


int main()
{
	/*printf("hello \n");
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	short int age = 20;
	
	char a = 'b';
	printf("% c\n", a);


	return 0;*/
}