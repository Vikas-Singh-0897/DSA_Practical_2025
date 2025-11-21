#include <iostream>
using namespace std;
// Print Function
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Insertion Sort Function
void insertionSort(int arr[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;

        cout << "After inserting " << key << ": ";
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

    insertionSort(arr, n);

    cout << "---------------------------------" << endl;
    cout << "Final Sorted Array: ";
    printArray(arr, n);

    return 0;
}