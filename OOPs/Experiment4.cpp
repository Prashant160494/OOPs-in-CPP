#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Elements of the collection:";

    // Range-based for loop with auto
    for (auto element : numbers) {
        cout << element << " ";
    }

    cout << endl;

    return 0;
}