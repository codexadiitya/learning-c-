#include <iostream>
using namespace std;
int main()
{
    int n;       // input number
    cin >> n;    // read the number
    int sum = 0; // initialization
    int i = 1;   // counter initialization

    while (i <= n)
    {
        sum = sum + i; // accumulate sum
        i = i + 1;     // increment counter
    }

    cout << sum << endl; // output the result
}