#include<iostream>

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

    Example(Example &emp){
        this->a = emp.a;
        this->b = emp.b;

        this->p = new int;
        *this->p = *emp.p;
    }

    void show(){
        cout << &this->a << endl;
        cout << &this->b << endl;
        cout << this->p << endl;
    }
};

int main() {
    int some = 3;

    Example e1(1, 2, some);
    Example e2(e1);

    e1.show();
    e2.show();

    return 0;
}
