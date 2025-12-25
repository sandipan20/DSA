#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, val;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> val;
            if (val == 1) {
                x = i;
                y = j;
            }
        }
    }

    cout << abs(x - 2) + abs(y - 2) << endl;
    return 0;
}
