#include <iostream>
using std::cin, std::cout;

const int N_MAX = 1000;
int numbers[N_MAX], n, found = 0, foundIndex;

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
    for (int i = 0; i < n - 2 && !found; i++) {
        int n = numbers[i];
        int n1 = numbers[i+1];
        int n2 = numbers[i+2];

        if (n == n1 && n1 == n2) {
            found = 1;
            foundIndex = i;
        }
    }
}

void print() {
    if (found) {
        cout << "[!] The number that was found is:\n"
            << " · " << numbers[foundIndex] << " (at index " << foundIndex << ")\n";
    } else {
        cout << "[!] There doesn't exist a number that is repeated 3 times in the given array.\n";
    }
}

int main() {
    cout << "[!] Welcome!\n";

    read();
    evaluate();
    print();

    return 0;
}