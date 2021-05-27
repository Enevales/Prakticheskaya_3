/*Определить, является ли год, который ввел пользователем,
високосным или невисокосным.*/

#include <iostream>
using namespace std;
int main() {
 int y;
 cout << "Введите год: "<<endl;
 cin >> y;
 if (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0))
 {
     cout <<"Невисокосный год"<<endl;
 }
 else
 {
     cout<<"Високосный";
 }
    
 return 0;
}
