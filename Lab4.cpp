#include <iostream>
using namespace std;
// Binary Search Funcion
int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements (e.g., 10 20 30): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}