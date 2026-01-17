#include <iostream>
using namespace std;
int main()
{
    int n;     // input number
    cin >> n;  // read the number
               // initializtion
    int i = 2; // counter14 initialization

    while (i <= n)
    {
        cout << i << " "; // print even number
        i = i + 2;        // increment counter
    }

    cout << "The all even numbers are: ";
}