 #include <iostream>
using namespace std;

int main() {
    int n, sum = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    cout << "Sum of digits = " << sum;
    return 0;
}