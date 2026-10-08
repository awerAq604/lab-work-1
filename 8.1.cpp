#include <iostream>
using namespace std;

// Çàäàíèå 1: èíäåêñ ìàññû òåëà (BMI)
void task1()
{
    float m = 0.0f, h = 0.0f, BMI = 0.0f;
    cout << "enter the value of mass" << endl;
    cin >> m;
    cout << "enter the value of height" << endl;
    cin >> h;
    if (m > 0 && h > 0)
    {
        BMI = m / (h * h);
        cout << BMI << endl;
    }
    else
    {
        cout << "error" << endl;
    }
}

// Çàäàíèå 8.2: max è min ÷åðåç öåïî÷êó if / else if
void task2()
{
    float a = 0.0f, b = 0.0f, c = 0.0f;
    cout << "enter the value of a" << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;
    cout << "enter the value of c" << endl;
    cin >> c;

    if (a > b && b > c)
    {
        cout << a << " - max" << endl;
        cout << c << " - min" << endl;
    }
    else if (b > a && a > c)
    {
        cout << b << " - max" << endl;
        cout << c << " - min" << endl;
    }
    else if (b > c && c > a)
    {
        cout << b << " - max" << endl;
        cout << a << " - min" << endl;
    }
    else if (c > a && a > b)
    {
        cout << c << " - max" << endl;
        cout << b << " - min" << endl;
    }
    else if (a > c && c > b)
    {
        cout << a << " - max" << endl;
        cout << b << " - min" << endl;
    }
    else if (c > b && b > a)
    {
        cout << c << " - max" << endl;
        cout << a << " - min" << endl;
    }
    else if (a == b && b == c)
    {
        cout << "the values are equal" << endl;
    }
    else if (a == b && b > c)
    {
        cout << a << " - max" << endl;
        cout << c << " - min" << endl;
    }
    else if (b == c && b > a)
    {
        cout << c << " - max" << endl;
        cout << a << " - min" << endl;
    }
    else if (a == c && a > b)
    {
        cout << c << " - max" << endl;
        cout << b << " - min" << endl;
    }
    else if (a == b && c > a)
    {
        cout << c << " - max" << endl;
        cout << a << " - min" << endl;
    }
    else if (b == c && a > b)
    {
        cout << a << " - max" << endl;
        cout << b << " - min" << endl;
    }
    else if (c == a && b > a)
    {
        cout << b << " - max" << endl;
        cout << a << " - min" << endl;
    }
}

int main()
{
    int choice = 0;
    cout << "choose task (1 or 2): " << endl;
    cin >> choice;

    if (choice == 1)
        task1();
    else if (choice == 2)
        task2();
    else
        cout << "wrong choice" << endl;

    return 0;
}
