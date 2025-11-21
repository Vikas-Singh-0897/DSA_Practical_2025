#include <iostream>
using namespace std;
// Print function
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Bubble Sort Function
void bubbleSort(int arr[], int n)
{
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (swapped == false)
        {
            return;
        }

        cout << "After Pass " << i + 1 << ": ";
        printArray(arr, n);
    }
}
// Main Function
int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nOriginal Array: ";
    printArray(arr, n);
    cout << "---------------------------------" << endl;

    bubbleSort(arr, n);

    cout << "---------------------------------" << endl;
    cout << "Final Sorted Array: ";
    printArray(arr, n);

    return 0;
}