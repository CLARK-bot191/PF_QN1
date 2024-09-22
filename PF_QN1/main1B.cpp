#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;

    // Numerator starts at 1, denominator starts at 3
    for (int numerator = 1, denominator = 3; numerator <= 95; numerator += 2, denominator += 2) {
        // A multiplying here by 1.0 to make the result a double.
		sum += (1.0 * numerator) / denominator; 
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
