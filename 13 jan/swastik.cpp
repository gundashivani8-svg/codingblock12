#include <iostream>
using namespace std;

int main() {
    int n = 5;   // standard swastik size

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (
                (i == 0 && j >= 2) ||        // top right horizontal
                (j == 0 && i <= 2) ||        // left vertical top
                (i == 2) ||                  // middle horizontal
                (j == 4 && i >= 2) ||        // right vertical bottom
                (i == 4 && j <= 2)           // bottom left horizontal
            ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
