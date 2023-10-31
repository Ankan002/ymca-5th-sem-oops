#include <iostream>

using namespace std;

class Student {
    string name;

    public:
        Student(string name) {
            this->name = name;
        }

        string getName() {
            return this->name;
        }
};

int main() {
    Student st("Ankan");

    cout << st.getName() << endl;

    return 0;
}
