#include <iostream>
using std::cout;
#define LENGTH 6

void a(int x);
void b(int x, int length);
void c(int x, int length);

int main(int argc, char const *argv[])
{
    cout << "a)\n";
    for (int i = 1; i <= LENGTH; i++) {
        a(i);
    }

    cout << "b)\n";

    for (int i = 1; i <= LENGTH; i++) {
        b(i, LENGTH);
    }

    cout << "c)\n";

    for (int i = 1; i <= LENGTH; i++) {
        c(i, LENGTH);
    }

    cout << "d)\n";

    for (int i = 1; i <= LENGTH; i++) {
        c(i, LENGTH);
    }

    for (int i = LENGTH - 1; i > 0; i--) {
        c(i, LENGTH);
    }

    return 0;
}

void c(int x, int length) {
    int templength{(length - x)};

    for (int i = 0; i < templength; i++){
        cout << " ";
    }
    for (int i = 0; i < (x *2 -1); i++) {
        cout << "*";
    }
    cout << std::endl;
}

void b(int x, int length) {
    int templength{length - x};

    for (int i = 0; i < templength; i++){
        cout << " ";
    }
    for (int i = 0; i < x; i++) {
        cout << "*";
    }
    cout << std::endl;
}

void a(int x) {
    for (int i = 0; i < x; i++){
        cout << "*";
    }
    cout << std::endl;
}