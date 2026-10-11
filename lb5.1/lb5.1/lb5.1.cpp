
// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b); 

int main()
{
    double s, t;

    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double y = (h(1, s * t) + pow(h(t + s, 1), 2))
        / (1 + pow(h(s, t), 3));

    cout << "y = " << y << endl;

    return 0;
}

double h(const double a, const double b) 
{
    return a * a - sin(b) * cos(a) + b * b;
}