#include <iostream>
using namespace std;

int main() {
    double temp;
    cout << "Enter motor temperature: ";
    cin >> temp;
    while(temp <= 90) {
        cout << "Temperature safe. Enter next reading: ";
        cin >> temp;
    }
    cout << "Motor temperature unsafe. Stop motor test." << endl;
    return 0;
}

