#include <iostream>

using namespace std;

class Shape {
    private: 
    string current_shape;

    public:
    Shape(string shape) {
        this->current_shape = shape;
    }

    string get_shape(){
        return this->current_shape;
    }
};

void printShape(Shape shape){
    cout << &shape << endl;
    cout << shape.get_shape() << endl;
}

int main() {
    Shape circle("circle"), square("square");

    cout << &circle << endl; 

    printShape(circle);
    printShape(square);

    return 0;
}
