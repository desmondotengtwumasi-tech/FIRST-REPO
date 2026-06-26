#include <iostream>
using namespace std;

int main() {
    double V, I;
    char choice;
    do {
        cout << "Enter Voltage (V): ";
        cin >> V;
        cout << "Enter Current (A): ";
        cin >> I;
        cout << "Resistance = " << V / I << " Ohms" << endl;
        cout << "Continue? (Y/N): ";
        cin >> choice;
    } while(choice == 'Y' || choice == 'y');
    return 0;
}

