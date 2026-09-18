#include <iostream>
using namespace std;

void printDown(int n)
{
    //to do
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << n << ", ";
        printDown(n - 1);
    }
}

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    printDown(n);

    return 0;
}