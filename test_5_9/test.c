#define _CRT_SERCURE_NO_WARNINGS 1

#include <stdio.h>


//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}





//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0,1,2,3,4,5,6,7,8,9
//	printf("%d\n", arr[4]);
//	//[] - �����±����ò�����
//	return 0;
//}


//��������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������
//	int ret = Add(a, b);
//	test();
//	return 0;
//}


//�ṹ��Ա���ʲ�����
//.
//->

//�ṹ��
// int float char short
//double long longlong
//�飺��������ţ������磬���ߣ�����
//�ˣ����֣����䣬�Ա�

//struct Book
//{
//	char name[20];//
//	char id[20];
//	int price;
//};
//
//
//int main()
//{
//	int num = 10;
//	struct Book b = { "C����", "C3472812", 55 };
//
//	struct Book* pb = &b;
//	printf("������%s\n", (*pb).name);
//	printf("��ţ�%s\n", pb->id);
//	printf("���ۣ�%d\n", pb->price);
//	//ָ��struct Book ��һ��ִ��
//
//
//	/*printf("����:%s\n", b.name);
//	printf("���:%s\n", b.id);
//	printf("����:%d\n", b.price);*/
//
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	// 00000011 - a
//	//00000000000000000000000001111111
//	//0111111 - b
//	char b = 127;
//	char c = a + b;
//
//	// c- 10000010
//	//����a �� b����char
//	//����ͻᷢ����������
//	//���������ǰ��ձ������������͵ķ���λ��������
//	//
//	printf("%d\n", c);
//	//c ��Ҫ��������
//	//111111111111111111111111100000010
//	//100000000000000000000000011111101
//	//100000000000000000000000011111100
//
//	return 0;
//}


//�ڱ���Ĺ�������������������a ��=0xb6
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb000000;
//
//	if (a == 0xb6)
//	{
//		printf("%d", a);
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//��������
//	printf("%u\n", sizeof(-c));
//	printf("%u\n", sizeof(!c));
//	//����Ĵ�С�ﲻ�����͵Ĵ�С����������ʱ���ͻ���������
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int d;
//	int s = 0;
//	d = sizeof(s = a + 3);//������ʽ�в��ᷢ�����㣬sizeof���Ƶ������Ľ��
//	printf("%d %d", s, d);//ֵ���ԣ���������
//
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();//��һ�ε��÷���ֵ��2����Ϊfun�����ĵ���˳��ͬ����Ҳ��һ������Ĵ��� �ڵ��ú���������ȼ����������
//	printf(" %d\n", answer);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d", ret);
//
//	return 0;//����д�ı��ʽ���п��ܲ���ȷ��Ψһ�ļ���·��
//}

//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}
//
//
//int main()
//{
//	char str[] = "hello bit";
//
//	//str = hello bit\0
//	printf("%d %d", sizeof(str), strlen(str));
//	//strlen - ���� - ���ַ������ȵģ���\0֮ǰ���ֵ��ַ�����
//	//sizeof - ������ - �������/������ռ�ڴ��С����λ���ֽ�
//	//���鳤����Ҫ�ã�sizeof(arr) / sizeof(arr[0])  
//	//������strlen����
//
//	int a[][3] = { {0,1,2}, {3,4,5} };//�кſ���ʡ���кŲ���ʡ�ԣ�
//	int a[2][4] = { {0,1,2}, {3,4}, {5} };// 2 4 ���������У�4��
//	int a[][3] = { {0,2}, {}, {3,4,5} };//
//
//
//	return 0;
//}


//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	return;
//}
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		arr[i] = 0;
//	}
//
//	return;
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		int tmp;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	return;
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//}

//int main()
//{
//	int x = 0;;
//	printf("x = %d", x);
//	int* p = &x;
//	*p = 2;
//	printf("x = %d", x);
//}


//������A�ն˵����ݺ�����B�е����ݽ��н�����������һ����
//�������ǳ����ĵ�ַ�����ܶ����������и�ֵ����++--�Ĳ���
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < 5; i++)
//	{
//		int tmp;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		//
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr1[%d] = %d ", i, arr1[i]);	
//		printf("arr2[%d] = %d ", i, arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int 
//}

//int main()
//{
//	int a = 10;//a�����ͣ�ռ��4���ֽڵ��ڴ�ռ䣬ÿ���ֽڶ��ж�Ӧ�ĵ�ַ
//
//	int* pa = &a;//&a - �õ�����a�ĵ�ַ����ʵ�õ�����a��ռ4���ֽ��е�һ���ֽڵĵ�ַ pa��ָ�������
//
//	pa = 10;//��ָ��������棬˭���ᱻ������ַ������
//
//	return 0;
//}

//int main()
//{
//	//char c;
//	//short s;
//	//int i;
//
//	char* pc;//4
//	short* s;//4
//	int* i;//
//
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(s));
//	printf("%zu\n", sizeof(i));
//
//	return 0;
//}

//ָ�����;����ˣ��ڽ�����ָ���ʱ���ܷ��ʼ����ֽ�

//int main()
//{
//	int a = 0x11223344;//16λ
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pc = &a;//��Ϊchar����ֻ�ܷ���һ���ֽ�
//	*pc = 0;
//
//	return 0;
//}


//ָ�����;����ˣ�ָ�����+1 -1��ʱ��һ���߶�Զ
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];//����һ���Ըı��ĸ��ֽ�����Ķ���
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{ 
//		*p = i + 1;//��Ϊһ��ʼ�����ʱ����ָ��int���͵�ָ�� ����ÿ�μ�һ���Ǽ�4 ���ԾͿ��� ÿһ�μ�4���������������ÿһ��Ԫ�ص�λ�� ��ַ
//		p++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//Ұָ��
//int main()
//{
//	int* p;//Ұָ��
//	*p = 20;
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 100;
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 100;
//	}
//
//	return 0;
//}


//void test(int arr[], int sz)//void test(int * arr, int sz)
//{
//	//�βεĲ���д�����飬д��ָ�������һ��һ����
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	
//	//*(arr + i) = *(p + i) = arr[i]
//	//arr[i] == *(arr + i) --> *(i + arr) -- i[arr]    []ֻ��һ����������������+  2 + 3 = 3 + 2 ����arr[i] = i[arr]
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p = %p\n", &arr[i], p + i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5];
//	//arr[i][j]
//	//*(arr + i)[j]
//	//*(*(arr + i) + j)
//	return 0;
//}

int main()
{
	char s[20] = "abcde";
	char d[20] = "abced";
	if (s == d)
	{
		printf("equal");
	}

	return 0;
}

int main()
{
	int* p = (int*)malloc(sizeof(int) * n);
}

int a = 1;
while (a <= 100)
{
	printf("%d\n", a* a);
	a++;
}

struct Student
{
	int ID;
	char[20] name;
	float marks[8];
	struct Student* next;

};

struct Student* creatlist()
{
	struct Student* headnode = (struct Student*)malloc(sizeof(struct Student));	
	headnode->next = NULL;
	return headnode;
}

struct Student* creatnode()
{
	struct Student* headnode = (struct Student*)malloc(sizeof(struct Student));
	headnode->
	headnode->next = NULL;

}


int foo(int n)
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count = count + 1;
		}
	}
	if (n == 0)
	{
		return -1;
	}

	return count;
}

int main()
{
	int i = 0;
	int ret = 0;
	int n = 0;
	scanf("%d", n);
	ret = foo(n);
	printf("%d", ret);
	
}


int main()
{
	char num[11] = { 0 };
	scanf("%s", num);
}

