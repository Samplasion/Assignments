#include <iostream>
using std::cin, std::cout;

const int N_MAX = 1000;
int V[N_MAX], n, minN;
int A[N_MAX], neg = 0;
int B[N_MAX], pos = 0;
int C[N_MAX], evenodd = 0;

void read() {
    do {
        cout << "[>] Please enter the number of values you wish to introduce: ";
        cin >> n;
    } while (n <= 0 || n > N_MAX);

    for (int i = 0; i < n; i++) {
        cout << "[>] Please enter the number in position " << (i+1) << ": ";
        cin >> V[i];
    }
}

void evaluateNegativeAndPositive() {
    for (int i = 0; i < n; i++) {
        if (V[i] > 0) {
            A[neg] = V[i];
            neg++;
        } else if (V[i] < 0) {
            B[pos] = V[i];
            pos++;
        }
    }
}

void evaluateOddAndEven() {
    minN = pos > neg ? neg : pos;
    for (int i = 0; i < minN; i++) {
        int searchee = !(evenodd % 2);
        if (A[i] % 2 == searchee) {
            C[evenodd] = A[i];
            evenodd++;
        } else if (B[i] % 2 == searchee) {
            C[evenodd] = B[i];
            evenodd++;
        }
    }
}

void print() {
    cout << "[!] The computed even/odd array is:\n";
    for (int i = 0; i < evenodd; i++) {
        cout << "C[" << i << "] = " << C[i] << "\n";
    }

    int maxN = pos > neg ? neg : pos;
    cout << "\nOut of " << evenodd << " numbers, " << (maxN - minN) << " haven't been used.";
}

int main() {
    cout << "[!] Welcome!\n";

    read();
    evaluateNegativeAndPositive();
    evaluateOddAndEven();
    print();

    return 0;
}