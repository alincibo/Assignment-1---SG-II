#include <iostream>
using namespace std;

class Car {
public:
    string make;
    string model;
    int year;

    void get_info() {
        cout << year << " " << make << " " << model << endl;
    }
};

int main() {
    Car myCar;
    myCar.make = "Honda";
    myCar.model = "Civic";
    myCar.year = 2021;
    myCar.get_info();
    return 0;
}
