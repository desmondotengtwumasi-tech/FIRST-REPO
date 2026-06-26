#include <iostream>
using namespace std;

int main() {
    double voltage;
    cout << "Enter solar panel voltage: ";
    cin >> voltage;
    while(voltage >= 18) {
        cout << "Voltage acceptable. Enter next reading: ";
        cin >> voltage;
    }
    cout << "Solar panel voltage below operating level." << endl;
    return 0;
}

