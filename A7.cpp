#include <iostream>
using namespace std;

int main() {
    double wattage, total = 0;
    for(int i = 1; i <= 12; i++) {
        cout << "Enter wattage for light " << i << ": ";
        cin >> wattage;
        total += wattage;
    }
    cout << "Total lighting load = " << total << " W" << endl;
    return 0;
}

