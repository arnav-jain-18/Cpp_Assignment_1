#include <iostream>
using namespace std;

class Base
{
public:
    // Function Overloading
    void display()
    {
        cout << "Display without argument" << endl;
    }

    void display(int x)
    {
        cout << "Display with integer: " << x << endl;
    }

    // Function to be overridden
    virtual void show()
    {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base
{
public:
    // Function Overriding
    void show() override
    {
        cout << "Derived class show()" << endl;
    }
};

int main()
{
    Base b;

    // Function Overloading
    b.display();
    b.display(10);

    // Function Overriding
    Derived d;
    d.show();

    return 0;
}
