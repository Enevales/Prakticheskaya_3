/* Определить четверть координатной плоскости, которой
принадлежит точка. Координаты точки ввести с клавиатуры.*/

#include <iostream>
using namespace std;
int main() {
    float x,y;
    cout << "Введите координаты: ";
    cin >> x >> y;
    if (x>y && y>0)
    {
        cout << "Точка принадлежит первой четверти.";
    }
    if (x>y && y<0)
    {
        cout << "Точка принадлежит четвёртой четверти.";
    }
    if (x<y && y>0)
    {
        cout << "Точка принадлежит второй четверти.";
    }
    if (x<y && y<0)
    {
        cout << "Точка принадлежит третьей четверти.";
    }
    
    return 0;
}
