// Homework_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
using namespace std;

/*  Задание 4:
    Написать рекурсивную функцию нахождения степени числа.*/
    /*Довольно долго сидел над этой задачей))))*/

//double vozved(double chislo, int stepen)
//{    
//    if (stepen == 0)
//        return 1;
//
//        if (stepen > 0)             
//            return chislo * vozved(chislo, stepen - 1);
//        
//        if (stepen < 0)
//        {           
//            return (1 / chislo) *  vozved(chislo, stepen + 1);
//        }
//}

//Задание 5:
//Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь.
//Проиллюстрируйте работу функции примером.

//void stars(int N)
//{
//    if (N == 0)
//        return;
//    cout << "*";
//    return stars(N - 1);
//}
//Задание 1:
//Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел.
//int NOD(int a, int b)
//{
//    if (a == 0)
//        return b;
//    if (b == 0)
//        return a;
//
//    if (a > b)
//        return NOD(a % b, b);
//    if (b > a)
//        return NOD(a, b % a);
//
//}
//
//Задание 6:
//Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b.
//Пользователь вводит a и b.Проиллюстрируйте работу функции примером.

//void recurs(int a, int b)
//{
//    int c = 0;
//    if (a > b)
//        swap(a, b);
//    for (int i = b; i >= a; i--) {
//        if (i == a)
//            cout << i << " =";
//        else
//            cout << i << " + ";
//        c += i;
//
//    }
//    cout << " " << c;
//}

//Задание 7:
//Напишите рекурсивную функцию, которая принимает одномерный массив из 100 целых чисел, 
//заполненных случайным образом, и находит позицию, с которой начинается последовательность из 10 чисел, 
//сумма которых минимальна.

int poz = 0;

int summin(int arr[], int start,int poz)
{
    int sum = 0;

    for (int i = start; i < start + 10; i++)
        sum += arr[i];

    if ((start + 10) > 99)
        return sum;
    
    if (sum > summin(arr, start + 1, poz))
    {
        return summin(arr, start + 1, poz);
    }
    if (sum < summin(arr, start + 1, poz))
    {          
        poz = start;
        return summin(arr, start + 1, poz);
    }

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*  Задание 4:
      Написать рекурсивную функцию нахождения степени числа.*/
      /*cout << vozved(2, -3);*/

     /* stars(10);*/
      /*cout << NOD(220, 110);*/

      /*К заданию номер 7*/
     /* int a, b;
      cout << " От какого числа произвести сложение?\n";
      cin >> a;
      cout << " До какого числа произвести сложение\n";
      cin >> b;
      recurs(a, b);*/

      //Задание 7:

    const int n = 100;
    int poz = 0;
    srand(time(NULL));
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand();
        cout << arr[i] << " ";
    }
    int start = 0;
    summin(arr, 0, poz);
    cout << endl << poz;
}

