#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int sum = 0;

    do
    {
        int digit = n % 10;
        sum += digit;

        n = n / 10;

    } while (n != 0);

    cout << sum;
    return 0;
}