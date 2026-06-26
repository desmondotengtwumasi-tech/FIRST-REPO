#include <iostream>
using namespace std;

int main() {
    double P, T, Energy, totalEnergy = 0;
    for(int i = 1; i <= 8; i++) {
        cout << "Enter power (W) and time (h) for appliance " << i << ": ";
        cin >> P >> T;
        Energy = P * T;
        totalEnergy += Energy;
    }
    cout << "Total energy consumed = " << totalEnergy << " Wh" << endl;
    return 0;
}

