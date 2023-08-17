#include <iostream>

using namespace std;

class Animal {
    private:
    int eyes, legs;

    public:
    Animal(int legs){
        this->legs = legs;
        this->eyes = 2;
    }

    int get_num_eyes(){
        return this->eyes;
    }
};

class Cat: public Animal {
    public:
    Cat(): Animal(56) {}

    string language(){
        return "meow";
    }
};

int main() {
    Cat c;
    Cat d;

    cout << c.get_num_eyes() << endl;
    cout << c.language() << endl;

    return 0;
}
