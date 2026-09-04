//find the sum of n naturnal no.
#include <iostream>
using namespace std;

void sn(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
}

int main() {
    int n, sum = 0;
    cout << "Enter a natural number: ";
    cin >> n;

    sn(n);
    return 0;
}