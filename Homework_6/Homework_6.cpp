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


int summin(int arr[], int start, int poz, int sum)
{        
    int s = 0;
    if ((start + 10) > 99) {
        cout << endl << endl << poz;
        return 0;
    }
    for (int i = start; i < start + 10; i++) {
        s += arr[i];
    }   
    if (s > sum)           
        return summin(arr, start + 1, poz,sum);
    
    if (s < sum)
    {
        sum = s;
        poz = start;
        return summin(arr, start + 1, poz,sum);
    }
}
//Задание 2:
//Написать игру «Быки и коровы».Программа "загадывает" четырёхзначное число и играющий должен угадать его.
//После ввода пользователем числа программа сообщает, сколько цифр числа угадано(быки) и сколько цифр угадано и стоит на нужном месте(коровы).
//После отгадывания числа на экран необходимо вывести количество сделанных пользователем попыток.В программе необходимо использовать рекурсию.
//int igra(int com[], int att)
//{
//    int a;
//    int arr[4];
//    int k = 0;
//    int b = 0;
//    cout << " \n Вводите свое число ниже" << endl;
//    cin >> a;
//    for (int i = 3; i >=0; i--) {
//        arr[i] = a % 10;
//        a /= 10;
//    }
//    for (int i = 0; i < 4; i++) {
//        if (com[i] == arr[i]) {
//            k += 1;
//            arr[i] = 0;
//        }
//    }
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            if (i != j) {
//                if (com[i] == arr[j]) {
//                    b += 1;
//                    arr[j] = 0;
//                }
//            }
//        }
//    }
//    
//    if (k == 4) {
//        cout << " Поздавляю, вы выиграли!!! Количество попыток равно " << att << endl;
//        return att;
//    }
//    else
//    {
//        cout << " У вас " << b << " быков и " << k << " коров.";
//        
//        return igra(com, att+1);
//    }
//}

//Задание 3:
//Дана шахматная доска размером 8х8 и шахматный конь.Программа должна запросить у пользователя координаты клетки поля и поставить туда коня.
//Задача программы найти и вывести путь коня, при котором он обойдет все клетки доски, становясь в каждую клетку только один раз.
//(Так как процесс отыскания пути для разных начальных клеток может затянуться, то рекомендуется сначала опробовать задачу на поле размером 6х6).
//В программе необходимо использовать рекурсию.




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*  Задание 4:
      Написать рекурсивную функцию нахождения степени числа.*/
      /*cout << vozved(2, -3);*/

     /* stars(10);*/
      /*cout << NOD(220, 110);*/

      /*К заданию номер 6*/
     /* int a, b;
      cout << " От какого числа произвести сложение?\n";
      cin >> a;
      cout << " До какого числа произвести сложение\n";
      cin >> b;
      recurs(a, b);*/

      //Задание 7:

    const int n = 100;

    srand(time(NULL));
    int arr[n];
    int poz = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (10 - 0) + 0;
        cout << arr[i] << " ";
    }
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
  
    summin(arr, 10, 0, sum);

    //Задание 2:

    //int com[4];
    //srand(time(NULL));    
    //char v;
    //for (;;) {
    //    for (int i = 0; i < 4; i++) {
    //        com[i] = rand() % (9 - 1) + 1;
    //         /*cout << com[i];*/          // Выводил загаданное число для проверки работы программы
    //    }
    //    cout << " Программа загадала 4-х значное число. Теперь и вы введите своё. Попробуйте угадать.";
    //    igra(com, 1);
    //    cout << endl <<" Еще раз будете играть? Д или Н" << endl;
    //    cin >> v;
    //    if (v == 'н' || v == 'Н')
    //        break;
    //}
}

