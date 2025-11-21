#include <iostream>
using namespace std;

#define MAX 100 // Maximum capacity of the queue

class Queue
{
    int arr[MAX];
    int front;
    int rear;

public:
    // Constructor
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // Enqueue Function
    void enqueue(int value)
    {
        if (rear == MAX - 1)
        {
            cout << "Error: Queue Overflow! (Queue is full)" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        cout << value << " enqueued into queue." << endl;
    }

    // Dequeue Function
    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Error: Queue Underflow! (Queue is empty)" << endl;
            return;
        }
        cout << arr[front] << " dequeued from queue." << endl;
        front++;
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

    // Peek Function
    void peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty." << endl;
            return;
        }
        cout << "Front element is: " << arr[front] << endl;
    }

    // Display Function
    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
// Main Function
int main()
{
    Queue q;
    int choice, value;

    do
    {
        cout << "\n--- QUEUE OPERATIONS ---" << endl;
        cout << "1. Enqueue (Insert)" << endl;
        cout << "2. Dequeue (Delete)" << endl;
        cout << "3. Peek (Front)" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            q.display();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}