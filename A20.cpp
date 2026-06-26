#include <iostream>
using namespace std;

int main() {
    double power, total = 0;
    for(int i = 1; i <= 10; i++) {
        cout << "Enter power reading " << i << ": ";
        cin >> power;
        if(power < 0) {
            cout << "Invalid reading skipped." << endl;
            continue;
        }
        total += power;
    }
    cout << "Total of valid power readings = " << total << " W" << endl;
    return 0;
}

