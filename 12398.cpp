#include <iostream>
#include <cstring>

using namespace std;

void increment(int a[3][3], int x, int y) {
    if (a[x][y] > 9) {
        a[x][y] -= 10;
    } else {
        a[x][y] += 1;
    }
}

void out(int n, int a[3][3]) {
    cout << "Case #" << (n) + 1 << ":" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    string path;
    int n = 0;
    int data[3][3] = {0};


    while (getline(cin, path)) {

        if (path.empty()) {
            out(n, data);
            break;
        }

        for (int k = 0; k < path.length(); k++) {
            char c = path.at(k);

            int id = c - 'a'; // 0 ~ 9

            increment(data, id / 3, id % 3);
            if (id >= 3) increment(data, (id - 3) / 3, (id - 3) % 3);
            if (id % 3 != 2) increment(data, (id + 1) / 3, (id + 1) % 3);
            if (id % 3 != 0) increment(data, (id - 1) / 3, (id - 1) % 3);
            if (id < 6) increment(data, (id + 3) / 3, (id + 3) % 3);

        }

        out(n, data);

        n++;
        memset(data, 0, sizeof(data));
    }


    return 0;
}
