#include <iostream>
using namespace std;

int main()
{
    int n = 10829;
    int digitSum = 0;

    while (n > 0)
    {

        int lastdigit = n % 10;
        digitSum += lastdigit;
        n = n / 10;
    }
    cout << "The sum of the digits of 10829 is: " << digitSum << endl;
    return 0;
}
