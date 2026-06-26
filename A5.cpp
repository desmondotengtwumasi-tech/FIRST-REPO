#include <iostream>
using namespace std;

int main() {
    int choice;
    double value;
    cout << "Select Conversion:\n";
    cout << "1. Volts to millivolts\n2. Amps to milliamps\n3. Kilowatts to watts\n4. Ohms to kilo-ohms\n";
    cin >> choice;
    cout << "Enter value: ";
    cin >> value;

    switch(choice) {
        case 1: cout << value << " V = " << value * 1000 << " mV" << endl; break;
        case 2: cout << value << " A = " << value * 1000 << " mA" << endl; break;
        case 3: cout << value << " kW = " << value * 1000 << " W" << endl; break;
        case 4: cout << value << " O = " << value / 1000 << " kO" << endl; break;
        default: cout << "Invalid selection" << endl;
    }
    return 0;
}

