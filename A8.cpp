#include <iostream>
using namespace std;

int main() {
    double L1, L2, L3, avg;
    for(int i = 1; i <= 6; i++) {
        cout << "Enter currents for set " << i << " (L1 L2 L3): ";
        cin >> L1 >> L2 >> L3;
        avg = (L1 + L2 + L3) / 3.0;
        cout << "Average current for set " << i << " = " << avg << " A" << endl;
    }
    return 0;
}

