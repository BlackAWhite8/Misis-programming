﻿// bpm_22_3_x.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
//#include <ofstream>
#include <iostream>
#include <fstream>

int fact(int n) {
    if ((n == 1) || (n == 0)) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }

}

int main()
{
    double dx = 0.05;
    double eps = 0.0001;
    double x = 0.1;
    double prev_sm = 0.0;
    double sm = 0.0;
    int i;
    while (x <= 1) {
        i = 1;
        prev_sm = 0.0;
        sm = 1.0;
        while (abs(sm-prev_sm) >= eps) {
            prev_sm = sm;
            sm += (pow(2 * x, i)/fact(i));
            i += 1;
        }
        std::cout << sm << " ";
        x += dx;
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