#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Select Fuse Rating:\n";
    cout << "1. 5 A Fuse\n2. 10 A Fuse\n3. 13 A Fuse\n4. 20 A Fuse\n5. 32 A Fuse\n";
    cin >> choice; 
	 switch(choice) {
        case 1: cout << "5 A Fuse: Small electronics" << endl; break;
        case 2: cout << "10 A Fuse: Lighting circuits" << endl; break;
        case 3: cout << "13 A Fuse: Domestic appliances" << endl; break;
        case 4: cout << "20 A Fuse: Industrial machines" << endl; break;
        case 5: cout << "32 A Fuse: Heavy-duty equipment" << endl; break;
        default: cout << "Invalid selection" << endl;
    }
    return 0;
}
	 
