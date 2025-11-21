#include <iostream>
using namespace std;

// Define maximum capacity of the array
const int MAX_SIZE = 100;

// Global variables
int arr[MAX_SIZE];
int currentSize = 0;

// Traverse Function
void traverse()
{
    if (currentSize == 0)
    {
        cout << "Array is empty." << endl;
        return;
    }
    cout << "Current Array Elements: ";
    for (int i = 0; i < currentSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Insertion Function
void insertElement(int value, int position)
{
    if (currentSize >= MAX_SIZE)
    {
        cout << "Error: Array is full (Overflow)." << endl;
        return;
    }
    if (position < 0 || position > currentSize + 1)
    {
        cout << "Error: Invalid position!" << endl;
        return;
    }
    for (int i = currentSize; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = value;
    currentSize++;
    cout << "Element inserted successfully!" << endl;
}

// Deletion Function
void deleteElement(int position)
{
    if (currentSize == 0)
    {
        cout << "Error: Array is empty (Underflow)." << endl;
        return;
    }
    if (position < 1 || position > currentSize)
    {
        cout << "Error: Invalid position!" << endl;
        return;
    }
    for (int i = position - 1; i < currentSize - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    currentSize--;
    cout << "Element deleted successfully!" << endl;
}

int main()
{
    int choice, value, position;

    // Initial Setup (Optional)
    cout << "Enter initial number of elements (max " << MAX_SIZE << "): ";
    cin >> currentSize;
    cout << "Enter " << currentSize << " elements: ";
    for (int i = 0; i < currentSize; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n--- ARRAY OPERATIONS MENU ---" << endl;
        cout << "1. Traverse (Display)" << endl;
        cout << "2. Insert Element" << endl;
        cout << "3. Delete Element" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            cout << "Enter value to insert: ";
            cin >> value;
            cout << "Enter position (1 to " << currentSize + 1 << "): ";
            cin >> position;
            insertElement(value, position);
            break;
        case 3:
            cout << "Enter position to delete (1 to " << currentSize << "): ";
            cin >> position;
            deleteElement(position);
            break;
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}