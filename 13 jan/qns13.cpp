#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;              // get last digit
        reverse = reverse * 10 + digit; // build reversed number
        num = num / 10;                // remove last digit
    }

    cout << "Reversed number is: " << reverse << endl;

    return 0;
}