#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    // Method to calculate area
    double area() {
        return length * breadth;
    }

    // Method to calculate perimeter
    double perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    double l, b;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;

    // Creating object and passing values to constructor
    Rectangle rect(l, b);

    cout << "Area = " << rect.area() << endl;
    cout << "Perimeter = " << rect.perimeter() << endl;

    return 0;
}
