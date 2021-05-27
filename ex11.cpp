/* Вводятся три целых числа. Определить какое из них наибольшее*/

#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    if(a*b>a*c)
    {
        if(a>b)
        {
            cout<<a;
        }
        if(b>a)
        {
            cout<<b;
        }
    }
    else {
        cout<<c;
    }
    return 0;
}
