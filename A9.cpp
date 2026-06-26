#include <iostream>
using namespace std;

int main() {
    int result, pass = 0, fail = 0;
    for(int i = 1; i <= 15; i++) {
        cout << "Enter result for component " << i << " (1=pass, 0=fail): ";
        cin >> result;
        if(result == 1) pass++;
        else fail++;
    }
    cout << "Passed components = " << pass << endl;
    cout << "Failed components = " << fail << endl;
    return 0;
}

