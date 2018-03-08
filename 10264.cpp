#include <iostream>
#include<cmath>

using namespace std;


int main() {

    int dim;

    while (cin >> dim) {

        int edges = pow(2, dim);
        int edges_array[edges];

        for (int i = 0; i < 1 << dim; i++) {
            cin >> edges_array[i];
        }

        int sums[edges];
        for (int i = 0; i < 1 << dim; i++) {
            int sum = 0;
            for (int j = 0; j < dim; j++) {
                int b = i ^(1 << j);
                sum += edges_array[b];
            }
            sums[i] = sum;
        }

        int max = 0;
        for (int i = 0; i < 1 << dim; i++) {
            for (int j = 0; j < dim; j++) {
                if (sums[i] + sums[i ^ (1 << j)] > max) {
                    max = sums[i] + sums[i ^ (1 << j)];
                }
            }
        }
        cout << max << endl;
    }

    return 0;
}
