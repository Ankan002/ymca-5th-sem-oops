#include <iostream>

using namespace std;

class Singleton {
    private:
        static Singleton *obj;

        Singleton() {}

    public: 
        Singleton(const Singleton &copy) = delete;

        const Singleton *getObject() {
            return this->obj;
        }
};

int main() {
    Singleton* obj1;
    Singleton* obj2;

    cout << &obj1 << endl;
    cout << &obj2 << endl;

    return 0;
}
