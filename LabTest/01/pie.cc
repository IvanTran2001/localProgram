#include <iostream>
#include <tgmath.h>
using std::cout;
using std:: endl;

double inputnum(int num);
int firstnum(double num, int place);

int main(int argc, char const *argv[])
{
    cout << inputnum(1687) << endl;
    cout << firstnum(3.14159, 5) << endl;
    
}

double inputnum(int num) {

    double pie = 1.0;
    double c = -1.0;
    double factor = 3.0;

    for (int i = 0; i < num; i++) {
        pie += 1/(c*factor);
        c *= -1;
        factor += 2;
    }
    pie *= 4;

    return pie;
}

int firstnum(double num, int place) {
    int sumnum = 0;
    double pie = 1.0;
    double c = -1.0;
    double factor = 3.0;

    while (int(4*pie*pow(10,place)) / pow(10,place) != num) {
        pie += 1/(c*factor);
        c *= -1;
        factor += 2;
        sumnum += 1;
        //cout << int(4*pie*pow(10,place)) / pow(10,place) << endl;
    }

    return sumnum;
}
