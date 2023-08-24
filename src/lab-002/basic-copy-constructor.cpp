#include <iostream>

using namespace std;

class Example {
    private:
    int a, b;

    public:
    Example(int a, int b){
        this->a = a;
        this->b = b;
    }

    void printAddresses() {
        cout << &this->a << endl;
        cout << &this->b << endl;
    }

    void members() {
        cout << this->a << endl;
        cout << this->b << endl;
    }
};

int main() {
    Example e1(1, 2);

    Example e2(e1);

    cout << "Address of e1" << endl;
    e1.printAddresses();
    e1.members();

    cout << "Address of e2" << endl;
    e2.printAddresses();
    e2.members();

    return 0;
}
