﻿// калькулятор 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    
    int a;
    int b;
    char Selection;
    int RES = 0;
    cout << "1 summa" << endl;
    cout << "2 difference" << endl;
    cout << "3 multiplication" << endl;
    cout << "4 Exit" << endl;
    cout << "\n";
    cout << "Введите 2 числа" << endl;
    cin >> a >> b;
    cout << "Выберите математическую операцию" << endl;
    cin >> Selection;
    cout << "\n";
    cout << "Вычисляем результат\n";

    switch (Selection) {


    case '1':
        RES = a + b;
        cout << "summa = " << endl;
        cout << RES;
        break;
    case '2':
        RES = a - b;
        cout << "difference = " << endl;
        cout << RES;
        break;
    case '3':
        RES = a * b;
        cout << "multiplication = " << endl;
        cout << RES;
        break;
    case '4':
        cout << "Exit";
        
    }
    
    
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
