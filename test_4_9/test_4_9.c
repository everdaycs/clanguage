#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	;//�����
//
//	return 0;
//}

//int main()
//{
//	//int age = 4654654;
//
//	//if (age < 18)
//	//{
//	//	printf("����\n");
//	//}
//	//else if (age >= 18 && age < 26)
//	//{
//	//	printf("����\n");
//	//}
//	//else if (age >= 26 && age < 40)
//	//{
//	//	printf("����\n");
//	//}
//	//else if (age >= 40 && age < 60)
//	//{
//	//	printf("׳��\n");
//	//}
//	//else if (age >= 60 && age < 100)
//	//{
//	//	printf("����\n");
//	//}
//	//else
//	//	printf("�ϲ���");
//	//int age = 10;
//
//	//if (age >= 18)//if �� else Ĭ��ֻ�ܿ���һ�����
//	//{
//	//	printf("����\n");
//	//}
//	//else
//	//	printf("δ����\n");
//
//	//printf("����̸����");//���Ƕ�����һ�仰
//	//if (age >= 18)//Ϊ��Ż�ִ��{}��������
//	//{
//	//	printf("adult");
//	//}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

//int test()
//{
//	if (0)
//		return 0;
//	printf("hehe\n");
//	return 1; 
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//
////	if (num = 5)
//	if (5 == num)//�������ͱ������бȽϵĻ������Խ�����������ߣ���ֹ���á� == ����ʱ��ֻ��һ��
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//C++
//	//c99 ��׼����֧�� ֱ����for������������
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if ((i % 2) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;//�ַ�Ҳ�ǿ��Եģ� �ַ��ײ�洢ʱ�õ�ʱASCII��
//	scanf("%d", &day);
//	switch (day) // ������float ֻ��������
//	{
//	case 1://case��������������ֵ ����
//		printf("����һ");
//		break;
//	//int n = 2
//	//case n:  // error
//	case 2://case���������ͳ��� ���ʽ  ������2.0
//		printf("���ڶ�");
//		break;
//	case 3://����д��3+0
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("����wu");
//		break;
//	case 6:
//		printf("����liu");
//		break;
//	case 7:
//		printf("����qi");
//		break;
//	}
//	return 0;
//}



//1-5������
//6-7��Ϣ��

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default://���Ҳ���Է��������� ֻҪ�Ƿ����������
//		printf("�������");
//		break;
//	}
//	return 0;
//}

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
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d", m, n);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	//��whileѭ���У�continue����������������ѭ��continue����Ĵ���
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		break;//��whileѭ���У�break�������õĵ���ֹѭ��
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
//	return 0;
//}


//getchar
//stdin ��׼���룬�Ӽ��̻�ȡһЩ�ַ�
//EOF - end of file - �ļ��Ľ�����־

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch); //���һ���ַ�
//	
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl+z - getchar �Ͷ�ȡ����
	//putchar �ǲ������\n ��
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}