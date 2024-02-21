#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");

    const int three = 3;
    const int five = 5;

    double matrix[three][five];

    cout << "Введите числа \n";
    for (int i = 0; i < three; ++i) {
        cout << "Строка " << i + 1 << ":\n";
        for (int x = 0; x < five; ++x) {
            cout << "Элемент " << x + 1 << ": ";
            cin >> matrix[i][x];
        }
    }

    cout << "Среднее арифметическое для каждой строки:\n ";
    for (int i = 0; i < three; ++i) {
        double sum = 0;
        for (int x = 0; x < five; ++x) {
            sum += matrix[i][x];
        }
        cout << "Строка " << i + 1 << ": " << sum / five << endl;
    }

    return 0;
}