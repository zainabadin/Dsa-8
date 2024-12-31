#include <iostream>
using namespace std;

int Ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return Ackermann(m - 1, 1);
    } else {
        return Ackermann(m - 1, Ackermann(m, n - 1));
    }
}

int main() {
    int result = Ackermann(2, 2);
    cout << "Ackermann(2, 2) = " << result << endl;
    return 0;
}
