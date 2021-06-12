#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int height = 0;

    cout << "¬ведите высоту: ";
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++)
        {
            cout << ' ';
        }

        for (int j = height - 2 * i; j <= height; j++)
        {
            cout << '^';
        }
        cout << endl;
    }

    return 0;
}