#include <iostream>
using namespace std;
//умножение
int main() {
    int a, b, multi;
    cout << "Введите первое целое число: ";
    cin >> a;
    cout << "Введите второе целое число: ";
    cin >> b;
    multi = a*b;
    cout << "Результат умножения " << a << "*" << b << " равен " << multi << endl;
    return 0;
}
