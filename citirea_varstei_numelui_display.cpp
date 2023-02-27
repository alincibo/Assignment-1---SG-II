#include <iostream>
#include <string>

using namespace std;

struct MyFamily {
    string name;
    string age;
};

void printAllFamily(const MyFamily& family);

int main() {
    cout << "Enter 3 members of the family\n\n";

    MyFamily family[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter member: ";
        getline(cin, family[i].name);

        cout << "Enter age: ";
        getline(cin, family[i].age);

        printAllFamily(family[i]);
    }

    return 0;
}

void printAllFamily(const MyFamily& family) {
    cout << "You enter: " << family.name << endl;
    cout << "And age: " << family.age << endl;
}
