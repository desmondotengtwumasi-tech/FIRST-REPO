#include <iostream>
using namespace std;

int main() {
    string code;
    int attempts = 0;
    while(attempts < 3) {
        cout << "Enter access code: ";
        cin >> code;
        if(code == "BEE208") {
            cout << "Access granted" << endl;
            return 0;
        } else {
            attempts++;
        }
    }
    cout << "Access denied. Maximum attempts reached." << endl;
    return 0;
}

