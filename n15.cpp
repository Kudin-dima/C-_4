#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    float one, two, calc;
    char sign = ' ';

    while (sign != '0')
    {
        cout << "Введите первое число: ";
        cin >> one;
        cout << "Введите второе число: ";
        cin >> two;
        cout << "Введите знак операции: ";
        cin >> sign;

        if (sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '0')
        {
            switch (sign)
            {
            case '0':
                break;
            case '-':
                calc = one - two;
                cout << one << " - " << two << " = " << calc << "\n";
                break;
            case '+':
                calc = one + two;
                cout << one << " + " << two << " = " << calc << "\n";
                break;
            case '*':
                calc = one * two;
                cout << one << " * " << two << " = " << calc << "\n";
                break;
            case '/':
                calc = one / two;
                if (two != 0)
                    cout << one << " / " << two << " = " << calc << "\n";
                else
                    cout << "делить на 0 нельзя\n";
            }
        }
        else
            cout << "Неверно указан знак операции.\n";
    }
    return 0;
}