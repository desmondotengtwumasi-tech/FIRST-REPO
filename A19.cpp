#include <iostream>
using namespace std;

int main() {
    double value, sum = 0;
    int count = 0;
    for(int i = 1; i <= 12; i++) {
        cout << "Enter sensor reading: ";
        cin >> value;
        if(value == 999) {
            cout << "Faulty sensor reading skipped." << endl;
            continue;
        }
        sum += value;
        count++;
    }
    cout << "Average of valid readings = " << sum / count << endl;
    return 0;
}

