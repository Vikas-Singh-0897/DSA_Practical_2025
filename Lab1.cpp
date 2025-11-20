#include <iostream>
using namespace std;
// Recursive Fibonacci series
int RecursiveFibbonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return RecursiveFibbonacci(n - 1) + RecursiveFibbonacci(n - 2);
}
// Main Function
int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    // Loop to print the series up to n terms
    for (int i = 0; i < n; i++)
    {
        cout << RecursiveFibbonacci(i) << " ";
    }
    cout << endl;

    return 0;
}