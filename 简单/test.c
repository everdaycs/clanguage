#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void delete(int arr[], int sz, int i)
{
    int j = 0;
    for (j = i; j < sz; j++)
    {
        arr[j] = arr[j + 1];
    }
}

int main()
{
    int arr[50] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int del = 0;
    scanf("%d", &del);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == del)
        {
            delete(arr, n, i);
            n--;
        }
    }

    int j = 0;
    for (j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}


int main()
{
    int y = 0;
    int m = 0;

    while ((scanf("%d %d", &y, &m)) != EOF)
    {
        if (m == 2)
        {
            if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
            {
                printf("29\n");
            }
            else
            {
                printf("28\n");
            }
        }
        else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            printf("31\n");
        }
        else
        {
            printf("30\n");
        }

        
    }

    return 0;
}