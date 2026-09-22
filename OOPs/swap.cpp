#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "--- Initial Values ---" << endl;
    cout << "x = " << x << ", y = " << y << "\n\n";

    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << " (No change)\n";

    swapByAddress(&x, &y);
    cout << "After swapByAddress: x = " << x << ", y = " << y << " (Swapped)\n";

    x = 10; y = 20;

    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << " (Swapped)\n\n";

    x = 10; y = 20;
    std::swap(x, y);
    cout << "After std::swap: x = " << x << ", y = " << y << " (Swapped)\n";

    return 0;
}