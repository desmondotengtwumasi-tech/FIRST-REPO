#include <iostream>
using namespace std;

int main() {
    double R;
    cout << "Enter earth resistance: ";
    cin >> R;
    while(R <= 5) {
        cout << "Resistance acceptable. Enter next reading: ";
        cin >> R;
    }
    cout << "Earth resistance too high. Improve earthing system." << endl;
    return 0;
}

