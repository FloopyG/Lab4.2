
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A, B, x, y, xp, xk, dx, i;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------------------" << endl;
    cout << "|" << setw(3) << "N" << "  |" << setw(5) << "x" << "     |" << setw(7) << "y" << "       |" << endl;
    cout << "----------------------------------" << endl;

    i = 1;
    x = xp;
    while (x <= xk) {
        A = (pow(x, 2) + x + 2) / pow(x, 2);

        if (x < 0)
            B = pow(x, 3) - 2 * pow(x, 4);
        else
            if (x >= 0 && x <= 2)
                B = pow(abs(x) + exp(x), 3);
            else
                B = 4 * cos(pow(x, 2) - 2);

        y = A + B;

        cout << "|" << setw(3) << setprecision(0) << i << "  |" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(3) << y << "    |" << endl;

        i++;
        x += dx;
    };
    cout << "----------------------------------" << endl;


    system("pause");
    cin.get();
    return 0;
}
