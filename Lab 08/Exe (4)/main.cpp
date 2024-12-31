#include <iostream>
using namespace std;

int binomialCoefficient(int n, int m) {
    if (m == 0 || m == n) {
        return 1;
    }
    return binomialCoefficient(n - 1, m - 1) + binomialCoefficient(n - 1, m);
}

int main() {
    int n = 5, m = 2;
    cout << "C(" << n << ", " << m << ") = " << binomialCoefficient(n, m) << endl;
    return 0;
}
