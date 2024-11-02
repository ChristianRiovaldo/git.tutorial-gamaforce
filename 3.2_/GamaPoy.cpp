#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Masukkan bilangan bulat: "; cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0) {
            cout << "Gama" << endl;
        }
        else if(i % 5 == 0) {
            cout << "Poy" << endl;
        }
        else if(i % 15 == 0) {
            cout << "GamaPoy" << endl;
        }
        else {
            cout << i << endl;
        }
    }
}