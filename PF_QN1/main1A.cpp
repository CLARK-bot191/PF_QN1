            //IS A LEAP YEAR (Y)

#include <iostream>
using namespace std;

bool is_leap_year(unsigned int Y) 
{
    // To check and see if it is a century year
    if (Y % 100 == 0) 
	{
    // To be a leap year, it has to be divisible 400
        return (Y % 400 == 0);
    } else {
        // If it's not a century year, it is a leap year if divisible by 4
        return (Y % 4 == 0);
    }
}

int main() {
    unsigned int year;
    cout << "Enter a year: ";
    cin >> year;

    if (is_leap_year(year)) 
	{
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
