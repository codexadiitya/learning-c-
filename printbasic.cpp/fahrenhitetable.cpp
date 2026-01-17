#include <iostream>
using namespace std;

int main()
{
    int start, end, step;         // input variables
    cout << "Start Fahrenheit: "; // prompt
    cin >> start;                 // read start

    cout << "End Fahrenheit: ";
    cin >> end;

    cout << "Step: ";
    cin >> step;

    cout << "\nFahrenheit   Celsius\n"; // table header

    // Loop chalega start se end tak
    for (int f = start; f <= end; f = f + step)
    {
        float c = (f - 32) * 5.0 / 9.0; // formula
                                        //
        cout << f << "            " << c << endl;
        // print row
    }

    return 0;
}
