#include <iostream>
using namespace std;

int main() {
    double P, total = 0;
    for(int i = 1; i <= 20; i++) {
        cout << "Enter appliance power (W): ";
        cin >> P;
        total += P;
        if(total > 5000) {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
    }
    cout << "Final total load = " << total << " W" << endl;
    return 0;
}

