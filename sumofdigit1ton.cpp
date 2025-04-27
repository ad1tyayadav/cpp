#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

       for (int i = 1; i <= n; i++)
    {
        int num = i;
        int sum = 0;
        do
        {
            int digit = num % 10;
            sum += digit;

            num = num / 10;

        } while (num != 0);

        cout << sum << endl;
    }
    return 0;
}