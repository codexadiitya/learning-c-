#include <iostream>
using namespace std;
int main()
{
    int n;    // input number
    cin >> n; // read the number
    // initializtion
    int sum = 0;
    int i = 2; // counter initialization

    while (i <= n)
    {
        sum = i + sum;
        i = i + 2; // increment counter
    }

    cout << "The sum of all even numbers is: " << sum << endl;
}