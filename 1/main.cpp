#include <iostream>

using namespace std;

int main()
{
    int k;
    int first, second;
    int divisible = 0;

    cout << "[!] Welcome!" << endl;
    cout << "[>] Insert an integer (k): ";
    cin >> k;

    do
    {
        cout << "[>] Insert an integer (first): ";
        cin >> first;
        if (first == 0)
        {
            // "Stop reading when the first number is 0"
            break;
        }

        cout << "[>] Insert an integer (second): ";
        cin >> second;

        if ((first * second) % k == 0)
        {
            divisible++;
        }
    } while (k != 0);

    cout << "[!] The number of pairs divisible by " << k << " is: " << divisible << endl;
}