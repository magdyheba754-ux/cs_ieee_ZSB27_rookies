#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n = n % 100;
    if (n < 10) {
        cout << 0;
    }
    cout << n << '\n';
    return 0;
}
