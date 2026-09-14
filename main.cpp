#include <iostream>
using namespace std;

class Car {
public:
    int price;
    string color;
};

void addData(Car *ptr) {
    ptr->color = "Blue";
    ptr->price = 20;
}

void addTen(int &num) {
    num += 10;
}



int main() {
    int x = 10;
    addTen(x);
    cout << x << endl;


    Car bmw;
    addData(&bmw);
    cout << bmw.color << endl << bmw.price;
    return 0;
}
