#include <iostream>
using namespace std;

inline float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b = 1) {
    return a / b;
}

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << "Multiplication: " << multiply(4.5, 2.0) << endl;

    cout << "Division (with 2nd arg): " << divide(10, 2) << endl;
    cout << "Division (using default): " << divide(10) << endl;

    cout << "Add integers: " << add(5, 10) << endl;
    cout << "Add floats: " << add(2.5f, 3.5f) << endl;

    return 0;
}