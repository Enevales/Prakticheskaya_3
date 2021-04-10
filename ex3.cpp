
#include <iostream>
using namespace std;
int main()
{   
int c;
char a;
cout<<("Перевести в байты (b) или килобайт(k): ");
cin>>a; 
cout<<("Введите число: ")<<endl;
cin>>c;
if (a=='b')
cout<<c<<" Кб = "<<c*1024<<" байт";
else if (a=='k')
cout<<c<<" байт = "<<c/1024.0<<" Кб"; 
return 0;
}