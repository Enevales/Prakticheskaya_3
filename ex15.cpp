/* Приём на работу идёт на конкурсной основе. Условия приёма
требуют 20 лет рабочего стажа и возраста не более 42 лет.
Определите, будет ли человек принят. */

#include <iostream>
using namespace std;
int main() {
    int age,expr;
    cout << "Введите возраст и рабочий стаж: ";
    cin >> age >> expr;
    if (age <= 42 && expr >= 21)
    {
        cout << "Кандидат принят на испытательный срок.";
    }
    else 
    {
        cout << "Кандидат не подходит.";
    }
    return 0;
}
