#include <iostream>
using namespace std;

int main() {
    double R;
    for(int i = 1; i <= 10; i++) {
        cout << "Enter insulation resistance (MO): ";
        cin >> R;
        if(R < 1) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break;
        } else {
            cout << "Insulation reading acceptable." << endl;
        }
    }
    return 0;
}

