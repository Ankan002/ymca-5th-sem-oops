#include <iostream>

using namespace std;

class Distance {
    int feet;
    int inches;

    public:
        Distance(int feet, int inches) {
            this->feet = feet;
            this->inches = inches;
        }

        void printDistance() {
            cout << this->feet << ", " << this->inches << endl;
        }

        int getFeet() {
            return this->feet;
        }

        int getInches() {
            return this->inches;
        }

        Distance operator +(Distance d) {
            int i = this->inches + d.getInches();
            int f = this->feet + d.getFeet();

            f += i / 12;
            i = i % 12;

            return Distance(f, i);
        } 
};

int main() {
    Distance d1(2, 9), d2(2, 11);

    Distance d3 = d1 + d2;
    d3.printDistance();

    return 0;
}
