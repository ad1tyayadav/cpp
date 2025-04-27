#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a valid integer number \n";

    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is an even number \n";
    }
    else
    {
        cout << num << " is an odd number ";
    };
    return 0;
}