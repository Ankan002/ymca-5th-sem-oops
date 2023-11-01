#include <iostream>

using namespace std;

class Add {
    public:
        int addInt(int x, int y) {
            return x + y;
        }

        // Overloading is a compile time polymorphism.
        float addInt(float x, float y) {
            return x + y;
        }
};

int main() {
    Add a;

    cout << a.addInt(1, 2) << endl;
    cout << a.addInt((float)1.5, (float)2.3) << endl;

    return 0;
}
