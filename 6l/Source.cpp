// ������������ ������ 6 (������ 1)
// ��������� �������� ������ 22��2
// ������� �.�., ��������� �.�., ����������� �.�.

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>                 // ����������� ������� rand
#include <time.h>


int main()
{
    int i;
    int max1 = 0;
    int mas[20];
    int* pmas;

    pmas = mas;

    setlocale(0, "rus");

    printf("��������������� ������:\n");        //�������� ������� 
    srand(time(0));                             //� ������� �������
    for (i = 0; i < 20; i++) {                  //��������������� �����
        *(pmas + i) = (rand() % 100);
        printf("%d ", *(pmas + i));
    }
    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        if (*(pmas + i) % 2 != 0)
        {
            max1 = *(pmas + i);
            break;
        }
    }

    for (int i = 0; i < 20; i++)                //����� �������������
    {                                           //��������� ��������
        if (*(pmas + i) > max1 && *(pmas + i) % 2 != 0)
        {
            max1 = *(pmas + i);
        }
    }
    if (max1 != 0) {
        printf("������������ �������� �����: %d\n", max1);
    }
    else {
        printf("��� ����� ������");
    }

    return 0;
}
