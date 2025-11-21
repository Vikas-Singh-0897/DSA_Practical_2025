#include <iostream>
#include <stack>
using namespace std;
// Queue using Stack class
class QueueUsingStacks
{
private:
    stack<int> inputStack;
    stack<int> outputStack;

public:
    // Enqueue Function
    void enqueue(int x)
    {
        inputStack.push(x);
        cout << x << " enqueued." << endl;
    }

    // Dequeue Function
    void dequeue()
    {
        if (outputStack.empty() && inputStack.empty())
        {
            cout << "Error: Queue Underflow (Empty)." << endl;
            return;
        }
        if (outputStack.empty())
        {
            while (!inputStack.empty())
            {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        int val = outputStack.top();
        outputStack.pop();
        cout << val << " dequeued." << endl;
    }

    // Peek Function
    void peek()
    {
        if (outputStack.empty() && inputStack.empty())
        {
            cout << "Queue is Empty." << endl;
            return;
        }
        if (outputStack.empty())
        {
            while (!inputStack.empty())
            {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        cout << "Front element: " << outputStack.top() << endl;
    }

    // Is Empty Function
    bool isEmpty()
    {
        return inputStack.empty() && outputStack.empty();
    }
};
// Main Function
int main()
{
    QueueUsingStacks q;
    int choice, val;

    do
    {
        cout << "\n--- QUEUE VIA STACKS MENU ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            q.enqueue(val);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}