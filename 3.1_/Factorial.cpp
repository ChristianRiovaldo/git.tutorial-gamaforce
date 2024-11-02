#include <iostream>
using namespace std;

int factorial(int n) {
    if(n < 2) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int N;
    cout << "Masukkan bilangan bulat positif: "; cin >> N;
    cout << factorial(N);
}