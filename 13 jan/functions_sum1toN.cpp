#include <iostream>
using namespace std;

int sumToN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    cout << sumToN(n);
    return 0;
}

