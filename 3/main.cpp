#include <iostream>
using std::cin, std::cout;

const int N_MAX = 1000;
int numbers[N_MAX], n, min, max;
double avg;

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
    // numbers is guaranteed to have at least 1 element
    min = max = numbers[0];
    for (int i = 0; i < n; i++) {
        if (numbers[i] < min)
            min = numbers[i];
        if (numbers[i] > max)
            max = numbers[i];
    }

    avg = ((double)max + (double)min) / 2;
}

void print() {
    cout << "[!] The computed values are the following:\n"
        << "\t- Minimum: " << min << "\n"
        << "\t- Maximum: " << max << "\n"
        << "\t- Average: " << avg << "\n"; // The last \n is for aesthetic
}

int main() {
    cout << "[!] Welcome!\n";

    read();
    evaluate();
    print();

    return 0;
}