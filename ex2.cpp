
#include <iostream>
using namespace std;

int main()
{   int a,b,c;
    cout<<"Введите три числа через пробел:"<<endl;
    cin>>a>>b>>c;
    if (((a>b) and (b>c)) or ((c>b) and (b>a)))
    cout<<b<<" - среднее число";
    else if (((b>a) and (a>c)) or ((c>a) and (a>b)))
    cout<<a<<" - среднее число";
    else 
    cout<<c<<" - среднее число";
    return 0;
}