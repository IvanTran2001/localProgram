#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char const *argv[])
{
    string name = "";
    cout << "Enter name: ";
    cin >> name;

    int age{0};
    cout << "Enter age: ";
    cin >> age;

    string dob = "";
    cout << "Enter date of birth: ";
    cin >> dob;

    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "DOB: " << dob << "\n" << endl;
    return 0;

}
