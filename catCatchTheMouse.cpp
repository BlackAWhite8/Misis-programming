// catCatchTheMouse.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
struct Dec2D {
    double x = 0.0;
    double y = 0.0;

    Dec2D(double coorX, double coorY) {
        x = coorX;
        y = coorY;
    }
};
struct Animal {
    Dec2D location;
    double speed;

};


double norm(double x, double y) {
    return sqrt(x * x + y * y);
}

int main()
{
    Dec2D hole(0, 0);
    Dec2D startMouse(0, -5);
    Animal cat = { Dec2D(5,0), 3 };
    Animal mouse = { startMouse, 1.5 };
    double holeDistance = norm(mouse.location.x-hole.x, mouse.location.y-hole.y);
    double currentDistance = norm(mouse.location.x - cat.location.x, mouse.location.y - cat.location.y);
    double catTime = currentDistance / cat.speed + holeDistance / cat.speed;
    double mouseTime = holeDistance / mouse.speed;
    if (catTime < mouseTime) {
        std::cout << "mouse will be eaten" << std::endl;
    }
    else {
        std::cout << "mouse will servive" << std::endl;
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
