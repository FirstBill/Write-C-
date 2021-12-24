//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//
//
//
//struct  Book  //创建结构体
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//int main()
//{
//	//利用结构体类型--创建一个该类型的结构体变量
//	struct Book b1 = { "c语言程序设计",55 };
//	//  .  --结构体变量.成员  
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d\n", b1.price);
//	//书名不能修改，因为其是数组，数组的本质是地址名，价格是数值所以可以直接赋值
//	//   b1.name = "c++"  (×)不可以这样子直接赋值
//	//修改要用到strcpy函数 原名strcpy --string cope --字符串拷贝，因为是库函数所以要头文件：string.h
//	strcpy(b1.name, "c++");//小括号第一个参数是目的地--放的位置，第二个参数是要操作的对象（拷贝的对象）
//	printf("%s\n", b1.name);
//
//	struct Book* pb = &b1;//利用pb打印我的书名和价格
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//
//	// -> --结构体指针->成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	return 0;
//}