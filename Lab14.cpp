#include <iostream>
using namespace std;
// Node Structure
struct Node
{
    int data;
    Node *next;
};
// Linked List class
class LinkedList
{
private:
    Node *head;

public:
    // Constructor
    LinkedList()
    {
        head = NULL;
    }
    // Insert Function
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << value << " at the beginning." << endl;
    }
    // Insert at the End function
    void insertAtEnd(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            cout << "Inserted " << value << " as the first element." << endl;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        cout << "Inserted " << value << " at the end." << endl;
    }

    // Insert at any Position
    void insertAtPosition(int value, int position)
    {
        if (position < 1)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        if (position == 1)
        {
            insertAtBeginning(value);
            return;
        }

        Node *newNode = new Node();
        newNode->data = value;
        Node *temp = head;

        for (int i = 1; i < position - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position out of bounds." << endl;
                return;
            }
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Position out of bounds." << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Inserted " << value << " at position " << position << "." << endl;
    }

    // Display Function
    void display()
    {
        if (head == NULL)
        {
            cout << "List is Empty." << endl;
            return;
        }
        Node *temp = head;
        cout << "Current List: ";
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
// Main function
int main()
{
    LinkedList list;
    int choice, value, pos;

    do
    {
        cout << "\n--- LINKED LIST MENU ---" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at Position (Middle)" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;
        case 3:
            cout << "Enter value: ";
            cin >> value;
            cout << "Enter position: ";
            cin >> pos;
            list.insertAtPosition(value, pos);
            break;
        case 4:
            list.display();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}