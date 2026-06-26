#include <iostream>
using namespace std;

int main() {
    double rated, starting;
    cout << "Enter rated current (A): ";
    cin >> rated;
    cout << "Enter starting current (A): ";
    cin >> starting;

    if (starting > 3 * rated)
        cout << "High starting current. Use proper motor starter" << endl;
    else
        cout << "Starting current is acceptable" << endl;

    return 0;
}

