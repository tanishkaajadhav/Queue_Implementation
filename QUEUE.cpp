// Add, Delete the members in the queue. Check the queue is overflow or empty 

#include <iostream>
using namespace std;

class Queue
{
private:
    int q[50];
    int front, rear, size;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        cout << "Enter size of queue: ";
        cin >> size;
    }

    void Add()
    {
        if (rear >= size - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }
        int val;
        cout << "Enter element to add: ";
        cin >> val;
        if (front == -1)
            front = 0;
        rear++;
        q[rear] = val;
        cout << val << " added to queue\n";
    }

    void Delete()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow\n";
            return;
        }
        cout << q[front] << " deleted from queue\n";
        front++;
        if (front > rear)
            front = rear = -1; // Reset queue
    }

    void Display()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements are:\n";
        for (int i = front; i <= rear; i++)
        {
            cout << q[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Queue que;
    int choice;
    do
    {
        cout << "\n1.Add\n2.Delete\n3.Display\n4.Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            que.Add();
            break;
        case 2:
            que.Delete();
            break;
        case 3:
            que.Display();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}

/*
OUTPUT
Enter size of queue: 3

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 1
Enter element to add: 10
10 added to queue

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 1
Enter element to add: 20
20 added to queue

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 3
Queue elements are:
10 20

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 1
Enter element to add: 30
30 added to queue

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 1
Enter element to add: 40
Queue Overflow

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 2
10 deleted from queue

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 3
Queue elements are:
20 30

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 2
20 deleted from queue

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 2
30 deleted from queue

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 2
Queue Underflow

1.Add
2.Delete
3.Display
4.Exit
Enter your choice: 4
Exiting...

*/