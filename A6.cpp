#include <iostream>
using namespace std;

int main() {
    int choice;
    double Pt, St, Vp, Vs;
    cout << "Select Transformer Calculation:\n";
    cout << "1. Turns Ratio\n2. Secondary Voltage\n3. Primary Voltage\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter Primary Turns: "; cin >> Pt;
            cout << "Enter Secondary Turns: "; cin >> St;
            cout << "Turns Ratio = " << Pt / St << endl;
            break;
        case 2:
            cout << "Enter Primary Voltage: "; cin >> Vp;
            cout << "Enter Primary Turns: "; cin >> Pt;
            cout << "Enter Secondary Turns: "; cin >> St;
            cout << "Secondary Voltage = " << (Vp * St / Pt) << endl;
            break;
        case 3:
            cout << "Enter Secondary Voltage: "; cin >> Vs;
            cout << "Enter Primary Turns: "; cin >> Pt;
            cout << "Enter Secondary Turns: "; cin >> St;
            cout << "Primary Voltage = " << (Vs * Pt / St) << endl;
            break;
        default:
            cout << "Invalid selection" << endl;
    }
    return 0;
}

