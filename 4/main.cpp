#include <iostream>
using std::cin, std::cout;

const int N_MAX = 1000;
int numbers[N_MAX], reverse[N_MAX], n;

void read() {
    do {
        cout << "[>] Please enter the number of values you wish to introduce: ";
        cin >> n;
    } while (n <= 0 || n > N_MAX);

    for (int i = 0; i < n; i++) {
        cout << "[>] Please enter the number in position " << (i+1) << ": ";
        cin >> numbers[i];
    }
}

void evaluate() {
    for (int i = 0; i < n; i++) {
        int j = n - 1 - i;
        reverse[j] = numbers[i];
    }
}

void print() {
    cout << "[!] The computed reversed array is:\n";
    for (int i = 0; i < n; i++) {
        cout << "reverse[i] = " << reverse[i] << "\n";
    }
}

int main() {
    cout << "[!] Welcome!\n";

    read();
    evaluate();
    print();

    return 0;
}