///week10-1.cpp

#include <iostream>
using namespace std;

class Cat {
public:
    void print() {
        cout << "I am a cat. meow meow\n";
    }
};

class Mouse {
public:
    void print() {
        cout << "I am a mouse. chi chi\n";
    }
};

int main()
{
    Cat cat1, cat2;
    cat1.print();
    cat2.print();
    Mouse mouse1, mouse2;
    mouse1.print();
    mouse2.print();
}
