#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N)��");
//	//��������
//	//getchar();//����'\n'
//
//	//���������е��ַ��Ͷ���ַ�
//	int tmp = 0;
//	while (tmp = getchar() != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d ", i);
//		i++;//��������   �������ֻ�Ӱ��
//	}
//
//	return 0;
//}

//for ѭ������ʼ�����жϲ��֣��͵������ַŵ���һ��


//int main()
//{
//	int i = 0;
//	//   ��ʼ��   �ж�    ����
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) //����д������ҿ����� ����10���������� ѭ����10��
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ��
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)//Ϊʲôֻ������
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; k++, i++)
//	{
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int x = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		x = x * i;
//	}
//	printf("%d\n", x);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int all = 0;
//	int ret = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = 1;//����׳�֮ǰ�� ��ret��ʼΪ1
//		for (j = 1; j <= i; j++)
//		{
//			ret = j * ret;
//		}
//		all = ret + all;
//	}
//	printf("%d\n", all);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int all = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = ret * i;
//		all = all + ret;
//	}
//	printf("%d\n", all);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr�������������в���k��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��� %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//#include <Windows.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	
//	while (left <= right) //�����ж����� ��Ҫ��������������ܽ�������Ķ���
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("welcome to bit!!!!!!");
//	return 0;
//}



#include <string.h>
//strlen
//strcmp

//abcedf    һ��һ�����бȽ� ��Ӧλ���ϵ�ASCII��ֵ
//abccqqqqqqq
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ�����123456��
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������");
//		scanf("%s", password);//Ϊʲôû��& ��Ϊpassword�Ǹ����� ��������������һ����ַ ����Ҫ&
//		//if (password == "123456")//err - �����ַ����Ƚϣ� ����ʹ��==��Ӧ��ʹ��strcmp
//		//����д��ֻ���ٱȽ������ַ����ĵ�ַ��û���κ�����
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}






//дһ����������Ϸ
//1.���Զ���һ��1-100֮��������
//2.������
//a. �¶��ˣ��͹�ϲ�㣬��Ϸ����
//b. �´��ˣ�������㣬�Ŵ��˻��ǲ�С�ˣ� ������
//c. ��Ϸ����һֱ�棬�����Ƴ���Ϸ

#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*****************************\n");
	printf("********* 1.play  ***********\n");
	printf("********* 0.exit  ************\n");
	printf("*****************************\n");


}

void game()
{
	//��������Ϸ��ʵ��
	//1.�����������
	//�����ϵ�ʱ��һֱ�ڷ����仯
	//��һ��rand�����
	int ret = rand() % 100 + 1;//%100 ��������0~99�� Ȼ��+1�� ��Χ����1~100
	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��rand֮ǰ
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�Ƴ���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
