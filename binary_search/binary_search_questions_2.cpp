#include<iostream>
using namespace std;

// Step 1: Find integer part of sqrt(n)
int binarySearchInteger(int n) {
    int s = 0, e = n, mid, ans = -1;
    while (s <= e) {
        mid = (s + e) / 2;
        if ((long long)mid * mid == n) {
            return mid; // perfect square
        }
        if ((long long)mid * mid < n) {
            ans = mid;   // store last valid mid
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans; // floor of sqrt(n)
}

// Step 2: Refine sqrt with decimal precision
float binarySearchFloat(int intPart, int n, int precision) {
    float factor = 1.0, ans = intPart;
    for (int i = 0; i < precision; i++) {
        factor /= 10;
        while ((ans + factor) * (ans + factor) <= n) {
            ans += factor;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int intPart = binarySearchInteger(n);
    cout << "Integer part is: " << intPart << endl;

    float ans = binarySearchFloat(intPart, n, 3);
    cout << "Square root (approx): " << ans << endl;

    return 0;
}
