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
        cout << "Power = " << V * I << " W" << endl;
        cout << "Perform another calculation? (Y/N): ";
        cin >> choice;
    } while(choice == 'Y' || choice == 'y');
    return 0;
}

