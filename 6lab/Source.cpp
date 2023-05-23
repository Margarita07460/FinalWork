// Лабораторная работа 6 (задача 1)
// Выполнили студенты группы 22ВВ2
// Арефьев А.А., Воробьева М.М., Расторгуева К.В.

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>                 // подключение функции rand
#include <time.h>


int main()
{
    int i;
    int maxd = 0;
    int mas[20];
    int* pmas;

    pmas = mas;

    setlocale(0, "rus");

    printf("Сгенерированный массив:\n");        //создание массива 
    srand(time(0));                             //с помощью датчика
    for (i = 0; i < 20; i++) {                  //псевдослучайных чисел
        *(pmas + i) = (rand() % 100);
        printf("%d ", *(pmas + i));
    }
    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        if (*(pmas + i) % 2 != 0)
        {
            maxd = *(pmas + i);
            break;
        }
    }

    for (int i = 0; i < 20; i++)                //поиск максимального
    {                                           //нечетного элемента
        if (*(pmas + i) > max && *(pmas + i) % 2 != 0)
        {
            max = *(pmas + i);
        }
    }
    if (max != 0) {
        printf("Максимальное нечетное число: %d\n", max);
    }
    else {
        printf("Все числа четные");
    }

    return 0;
}
