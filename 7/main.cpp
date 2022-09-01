#include <iostream>
using namespace std;

const int nmax = 1000;

void read(int& n, int v[]) {
    do {
        cout << "[>] Please enter the number of values you wish to introduce: ";
        cin >> n;
    } while (n <= 0 || n > nmax);

    for (int i = 0; i < n; i++) {
        cout << "[>] Please enter the number in position " << (i+1) << ": ";
        cin >> v[i];
    }
}

void evaluate(int n, int v[], double& min, double& max, double& diff, double& quot) {
    min = max = v[0];
    for (int i = 0; i < n; i++) {
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
    }

    diff = max - min;
    if (min != 0) quot = max / min;
}

void print(double min, double diff, double quot) {
    printf("[!] The difference is %.0f.\n", diff);
    if (min != 0)
        printf("[!] The quotient is %.0f.\n", quot);
}

int main() {
    cout << "[!] Welcome!\n";
    
    int n, v[nmax];
    double min, max, diff, quot;

    read(n, v);
    evaluate(n, v, min, max, diff, quot);
    print(min, diff, quot);
}