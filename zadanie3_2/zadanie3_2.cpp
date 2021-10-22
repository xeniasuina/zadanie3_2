//Напишите рекурсивную процедуру для перевода числа из двоичной
//системы счисления в десятичную.
#include <iostream>

using namespace std; 

int f2(int n) {
    int k = 0;
    int static i = -1;
    if (n == 0) {
        return 0;
    }
    else {
        i+=1;
        k = (n % 10) * pow(2, i) + f2(n / 10);
    }
    return k;
}

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите число в двоичной сс ";
    cin >> n;
    cout << f2(n);
}