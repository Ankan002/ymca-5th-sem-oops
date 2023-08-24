#include <iostream>

using namespace std;

class Example {
    private:
    int a, b;
    int *p;

    public:
    Example(int a, int b, int &p){
        this->a = a;
        this->b = b;
        this->p = &p;
    }

    Example(Example &e) {
        this->a = e.a;
        this->b = e.b;
        this->p = e.p;
    }

    void show(){
        cout << &this->a << endl;
        cout << &this->b << endl;
        cout << this->p << endl;
    }
};

int main() {
    int something = 45;

    Example e1(1, 2, something);
    Example e2(e1);

    cout << "ONE:" << endl;
    e1.show();

    cout << "TWO:" << endl;
    e2.show();

    return 0;
}
