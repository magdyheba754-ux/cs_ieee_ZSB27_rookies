#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int r1 = -1, c1 = -1, r2, c2;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            char ch;
            cin >> ch;
            if (ch == 'o') {
                if (r1 == -1) {
                    r1 = i;
                    c1 = j;
                } else {
                    r2 = i;
                    c2 = j;
                }
            }
        }
    }

    int rows = r2 - r1;
    int cols = c2 - c1;
    if (cols < 0) cols = -cols;

    cout << rows + cols << '\n';
    return 0;
}
