#include <iostream>

using namespace std;

class Integer {
    private:
    int num;

    public:
    Integer(){
        this->num = 0;
    }

    Integer(int number) {
        this->num = number;
    }

    int get_num() {
        return this->num;
    }
};

class MathsDynamic {
    public:
    int add(Integer a, Integer b){
        return a.get_num() + b.get_num();
    }

    int multiply(Integer a, Integer b){
        return a.get_num() * b.get_num();
    }
};

class MathStatic {
    private:
    Integer a;
    Integer b;

    public:
    MathStatic(Integer a, Integer b){
        this->a = a;
        this->b = b;
    }

    int add(){
        return this->a.get_num() + this->b.get_num();
    }

    int multiply() {
        return this->a.get_num() * this->b.get_num();
    }
};

int main() {
    Integer numOne(20), numTwo(69);
    MathsDynamic mathDynamic;
    MathStatic mathStatic(numOne, numTwo);

    cout << "Dynamic sum of the numbers is: " << mathDynamic.add(numOne, numTwo) << endl;
    cout << "Dynamic product of the numbers is: " << mathDynamic.multiply(numOne, numTwo) << endl;

    cout << "Static sum of the numbers is: " << mathStatic.add() << endl;
    cout << "Static product of the numbers is: " << mathStatic.multiply() << endl;

    return 0;
}
