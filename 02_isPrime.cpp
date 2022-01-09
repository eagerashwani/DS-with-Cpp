#include <iostream>
using namespace std;

int main()
{

    int t;
    cout << "How many number you want to check?" << endl;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        int n;
        int factor;
        cout << "Enter a number : " << endl;
        cin >> n;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                factor++;
                break;
            }
        }
        if (factor == 1)
        {
            cout << n << " is not prime";
        }
        else
        {
            cout << n << " is prime";
        }
    }

    return 0;
}