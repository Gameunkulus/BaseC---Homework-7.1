﻿// Homework-7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

#define MODE 1

#ifndef MODE 
#error Необходимо определить MODE
#endif

#if MODE == 0 
    #define mess "Работаю в режиме тренировки" 
#elif MODE == 1 
    #define mess "Работаю в боевом режиме" 
    int add(int a, int b)
    {
    return a + b;
    };
#else
    #define mess "Неизвестный режим. Завершение работы"
#endif
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << mess << endl;
#if MODE == 1 
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Сумма двух чисел: " << add(a, b);
    cout << endl;
#endif
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
