#include <iostream>
using namespace std;
// Maximum size of array for tree
const int MAX = 100;
// Insert Node
void insertNode(int tree[], int index, int value)
{
    if (index >= MAX)
    {
        cout << "Insertion failed! Index out of range.\n";
        return;
    }
    tree[index] = value;
}
// Print Tree
void printTree(int tree[], int size)
{
    cout << "Binary Tree (Array Representation): ";
    for (int i = 0; i < size; i++)
    {
        cout << tree[i] << " ";
    }
    cout << endl;
}
// Creat Tree
void createTree(int tree[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int value;
        cout << "Enter value for node at index " << i << ": ";
        cin >> value;
        insertNode(tree, i, value);
    }
}
// Main Function
int main()
{
    int tree[MAX];
    for (int i = 0; i < MAX; i++) // Initializing array with -1 (meaning empty)
        tree[i] = -1;
    int n;
    cout << "Enter number of nodes to insert in binary tree: ";
    cin >> n;
    createTree(tree, n);
    printTree(tree, n);
    return 0;
}