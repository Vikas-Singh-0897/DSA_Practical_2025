#include <iostream>
using namespace std;
// Main Function
int main()
{
    long baseAddress;
    int rows, cols, i, j, elementSize;

    // Input 2D Array
    cout << "--- 2D Array Address Calculator ---" << endl;
    cout << "Enter Base Address (e.g., 1000): ";
    cin >> baseAddress;

    cout << "Enter total Rows (M) and Columns (N): ";
    cin >> rows >> cols;

    cout << "Enter size of one element in bytes (e.g., 4 for int): ";
    cin >> elementSize;

    // Input Target Coordinate (i,j)
    cout << "\nEnter the row index (i) to find: ";
    cin >> i;
    cout << "Enter the column index (j) to find: ";
    cin >> j;

    // Check
    if (i >= rows || j >= cols || i < 0 || j < 0)
    {
        cout << "Error: Indices out of bounds!" << endl;
        return 1;
    }

    long rowMajorAddr = baseAddress + elementSize * ((i * cols) + j);

    long colMajorAddr = baseAddress + elementSize * ((j * rows) + i);

    cout << "\n---------------------------------" << endl;
    cout << "Element coordinates: arr[" << i << "][" << j << "]" << endl;
    cout << "---------------------------------" << endl;
    cout << "Row-Major Address:    " << rowMajorAddr << endl;
    cout << "Column-Major Address: " << colMajorAddr << endl;
    cout << "---------------------------------" << endl;

    return 0;
}