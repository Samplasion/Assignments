#include <iostream>
using std::cout, std::cin;

const int N_MAX = 1000;
int numbers[N_MAX], n, evenSum = 0, indexSum = 0, k;

void read() {
    do {
        cout << "[>] Please enter the number of values you wish to introduce: ";
        cin >> n;
    } while (n <= 0 || n > N_MAX);

    for (int i = 0; i < n; i++) {
        cout << "[>] Please enter the number in position " << (i+1) << ": ";
        cin >> numbers[i];
    }

    do {
        cout << "[>] Please enter the number K you wish to check the numbers' divisibility by: ";
        cin >> k;
    } while (k == 0);
}

void evaluate() {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            indexSum++;
        else if (numbers[i] % 2 == 0)
            evenSum++;
    }
}

void print() {
    // This would be perfect for a macro
    if (indexSum > evenSum) {
        cout << "The sum of even-indexed values is greater (" << indexSum << "), ";
        if (indexSum % k == 0)
            cout << "and it's divisible by " << k;
        else
            cout << "but it isn't divisible by " << k;
    } else if (indexSum < evenSum) {
        cout << "The sum of even values is greater (" << evenSum << "), ";
        if (evenSum % k == 0)
            cout << "and it's divisible by " << k;
        else
            cout << "but it isn't divisible by " << k;
    } else {
        cout << "The sum of even values is equal to that of even-indexed values (" << evenSum << "), ";
        if (evenSum % k == 0)
            cout << "and they're both divisible by " << k;
        else
            cout << "but they both aren't divisible by " << k;
    }
}

int main() {
    cout << "[!] Welcome!\n";
    read();
    evaluate();
    print();

    return 0;
}