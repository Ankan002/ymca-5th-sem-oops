# Operator Overloading

Operators that cannot be overloaded:

- .
- ::
- ?
- :

Example:

```c++
class counter {
    int count;

    public: 
        counter() {
            count = 0;
        }

        int getCount(){
            return count;
        }

        void operator ++ (){
            this->count++;
        }
};
```

Example 2:

```c++
class Distance {
    int feet;
    int inch;

    public:
        Distance(){
            feet = 0;
            inch = 0;
        }

        Distance(int feet, int inch) {
            this->feet = feet;
            this->inch = inch;
        }

        void showDistance() {
            cout << "distance" << endl;

        }

        Distance operator + (Distance d) {
            int f = feet + d.feet();
            int in = inches + d.inches();

            // Some more code

            return Distance(f, in);
        }
};

void main() {
    Distance d1, d2, d3;

    d1.getData();
    Distance d4(10, 10);

    d2 = d1 + d3;

    d2.getData();
}
```
