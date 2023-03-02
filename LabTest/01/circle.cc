#include <iostream>
#include <math.h>
#include <cmath>
using std::cin;
using std::cout;
void calculatecircle(double x);

int main()
{
    double num{0.0};
    cout << "Input Radius: ";
    cin >> num;

    calculatecircle(num);

    return 0;
}

void calculatecircle(double x) {

    cout << round(M_PI * x*x*100) / 100;
}