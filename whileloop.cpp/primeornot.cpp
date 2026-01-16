#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 2;

    while (i < n)
    {

        if (n % i == 0) // divide hua tho not prime hoga
        {
            cout << "Not Prime" << endl;
        }
        i = i + 1;
    }
}