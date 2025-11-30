#include <iostream>
using namespace std;

int main() {
    string ip = "abc";
    string ans[6];
    int k = 0;

    for (int i = 0; i < ip.length(); i++) {
        for (int j = 0; j < ip.length(); j++) {
            if (i == j) continue;

            // Copy original
            string temp = ip;

            // Swap the positions
            swap(temp[0], temp[i]);
            swap(temp[1], temp[j]);

            ans[k++] = temp;
        }
    }

    // Print unique permutations
    for (int i = 0; i < k; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
