/*Вводятся два целых числа. Проверить делится ли первое на второе.
Вывести на экран сообщение об этом, а также остаток (если он есть)
и частное (в любом случае).*/
#include <iostream>
using namespace std;
int main() {
 int a,b;
 cout << "Введите два числа: "<<endl;
 cin >> a >> b;
 if (!(a%b))
 {
     cout << "Да, делится нацело, частное - " << a/b <<endl; 
 }
 else
 {
     cout << "Нет, не делится нацело, остаток - "<< a%b <<", а частное - "<< a/b <<endl;
 }
 
 return 0;
}
