/* Дана следующая функция
y=f(x):
y = 2x - 10, если x > 0; y = 0, если x = 0; y = 2 * |x| - 1, если x < 0
Требуется найти значение функции по переданному x.*/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x;
    cout << "Введите x:";
    cin >> x; 
    if (x>0)
    {
        cout<<2*x-10;
    }
    if (x==0)
    {
        cout<<0;
    }
    if (x<0)
    {
        cout<<2*abs(x)-1; // abs(x) - модуль числа x
    }
    return 0;
}
