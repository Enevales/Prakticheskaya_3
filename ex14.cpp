/* Напишите программу, которая анализирует человека по возрасту и
относит к одной из четырех групп: дошкольник, ученик, работник,
пенсионер. Возраст человека вводится с клавиатуры */

#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Введите возраст человека: ";
    cin >> age;
    if (age<7)
    {
        cout << "Дошкольник.";
    }
    if (age>=7 && age<=18)
    {
        cout << "Ученик.";
    }
    if (age>=19 && age<=65)
    {
        cout << "Работник.";
    }
    if (age>=66)
    {
        cout << "Пенсионер.";
    }
    return 0;
}
