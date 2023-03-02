#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void findCard(int x);

int main(int argc, char const *argv[])
{

    int num = 0;
    string colors[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"};
    cout << "Select a number: ";
    cin >> num;

    cout << colors[int(num/7)] << " " << ((num%7) + 1) << endl;

    return 0;
}
