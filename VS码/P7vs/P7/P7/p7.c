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
//	//�������ֱ������EOF���ǻ����EOF�޷�ͣ������ѭ��
//	//�����ctrl + z �Ϳ���ͣ����
//	//EOF(�ļ�������־) - end of file ->���������ϵ�ֵ�ǣ��� -1
//
//}
//
//
//
////getchar -- ���ܼ����ϵ�һ���ַ�
////putchar -- ��ӡ�ַ�
//int main()
//{
//	int ch = getchar();
//	putchar(ch);     //��putchar����ַ�
//	printf("%c\n", ch);//��printf����ַ�
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
//		//��ӡ12345678910����������
//		//continue�����ã�
//		//����ֹ����ѭ����continue����Ĵ��룩
//		//continue��������ֹ����ѭ���ģ�Ҳ����ѭ����continue��ߵĴ��벻����ִ�У�
//		//����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������ж�
//			
//	} 
//	int z = 1;  
//	while (z < 10)
//	{
//		if (5 == z)
//		{
//			break;
//			//break�����ã�
//			//��ѭ����ֻҪ����break����ֹͣ�������е�ѭ����ֱ����ֹѭ����
//			//���ԣ�while�е�break������������ֹѭ����
//		}
//		z++;
//		printf("%d\%", z);
//		//���ӡ1234����������
//	}
//}
//
//
////���⣬�����m = 5,n = 3
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
//		{  //switch����Ƕ��ʹ��
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
////switch���
//int main()
//{
//	int day = 0;
//	printf("������������������ڼ���");
//	scanf("%d", &day);
//	//��
//	switch (day)//switchС�����ڱ��붨������������
//	{
//	case 1+0:     //case������ ���γ��� ���ʽ
//		printf("����������һ\n");
//		break;    //break������switch���ģ����������仹�ᱻִ��
//	case 2:
//		printf("���������ڶ�\n");
//		break;		
//	case 3:
//		printf("������������\n");
//		break;
//	case 4:
//		printf("������������\n");
//		break;
//	case 5:
//		printf("������������\n");
//		break;
//	case 6:
//		printf("������������\n");
//		break;
//	case 7:
//		printf("������������\n");
//		break;
//	default: //������Ĳ���1-7��Ҳ����ִ�в���caseʱִ��default
//		printf("�������\n");
//		break;
//	}
//
//	//��
//	if (1 == day)
//	{
//		printf("����������һ\n");
//	}
//	else if (2 == day)
//	{
//		printf("���������ڶ�\n");
//	}
//	else if (3 == day)
//	{
//		printf("������������\n");
//	}
//	else if (4 == day)
//	{
//		printf("������������\n");
//	}
//	else if (5 == day)
//	{
//		printf("������������\n");
//	}
//	else if (6 == day)
//	{
//		printf("������������\n");
//	}
//	else if (7 == day)
//	{
//		printf("������������\n");
//	}else
// 	{
//		printf("�������\n");
//	}
//	return 0;
//}
//
//
////��ϰ��
////1.�ж�һ�����Ƿ�Ϊ����
////2.���1-100֮�������
//int main()
//{
//	//��
//	int y = 1;
//	while (y<=100)
//	{
//		printf("%d ", y);
//			y += 2;
//	}
//
//	//��
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
//	//��
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
//	//��д��ʽ�Ż�
//	int num = 4;
//	if (num = 5)
//	{
//		printf("�Ǻ�\n");
//	}
//	//����==(����)д��=����ֵʱ�������ᱨ��
//	//����ִ�н���Ǵ�ӡ �Ǻ�
//	//�����Ƽ�����������д��ʽ
//	int num = 4;
//	if (5 == num)
//	{
//		printf("�Ǻ�\n");
//	}
//	//������ʹ��д��һ��=������ͻ���벻��
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
//	//����else
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//			printf("haha\n");
//	return 0;
//	//��Ϊelse�����������δƥ���ifƥ������else��ڶ���ifƥ��
//	//��Ϊ a = 0����δ��������if�����
//	//�����û������κ�����
//  //��{}���ԺܺõĽ����Щ����
//}
//
////if���
//int main()
//{
//	int age = 10;
//
//	//��
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("����\n");
//	}
//	else if (age >= 50 && age < 90)
//	{
//		printf("����\n");
//	}
//	else 
//	{
//		printf("�ϲ���\n");
//	}
//	//��
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else
//	{
//		printf("����\n");
//	
//	}
//	//��
//	if (age < 18)
//	printf("δ����\n");
//
//	return 0;
//   
//}
