#include <iostream>

using std::cin;
using std::cout;

int sum(int x[], int size);

int main(int argc, char const *argv[])
{
    int numbers[5] = { };
    int size = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        cout << "num " << i << ":";
        cin >> numbers[i];
    }

    cout << "sum: " << sum(numbers, size);

    return 0;
}

int sum(int x[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i ++) {
        sum += x[i];
    }

    return sum;
}
