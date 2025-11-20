#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    if (n <= 0) {
        cout << "False,power of 2";
        return 0;
    }

    while (n != 1) {
        if (n % 2 != 0) {
            cout << "False,power of 2";
            return 0;
        }
        n = n / 2;
    }

    cout << "True,power of 2";
    return 0;
}
